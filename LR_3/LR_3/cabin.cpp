#include "cabin.h"

Cabin::Cabin()
{
    cur_direction = NO_DIRECTION;
    cur_floor = 1;
    target_floor = 1;
    state = WAITING;
    connect(&doors, SIGNAL(closedDoors()), this, SLOT(movement()));
    connect(&timerMovement, SIGNAL(timeout()), this, SLOT(movement()));
    connect(this, SIGNAL(stoppedOnTargetFloor()), this, SLOT(stopOnFloor()));
    connect(this, SIGNAL(move()), &doors, SLOT(closeDoors()));
    connect(this, SIGNAL(targetAchieved(int, Direction)), &doors, SLOT(openingDoors()));
    connect(&doors, SIGNAL(statusChanged(QString)), this, SLOT(sendDoorsMessage(QString)));
    timerMovement.setSingleShot(true);
}

void Cabin::movement()
{
    if (this->state == BUSY)
    {
        state = MOVING;
        if (cur_floor == target_floor)
        {
            emit stoppedOnTargetFloor();
        }
        else
        {
            timerMovement.start(TIME_BETWEEN_FLOORS);
        }
    }
    else if (state == MOVING)
    {
        if (cur_floor < target_floor)
        {
            cur_direction = UP;
            cur_floor += 1;
        }
        else
        {
            cur_direction = DOWN;
            cur_floor -= 1;
        }
        if (cur_floor == target_floor)
        {
            emit stoppedOnTargetFloor();
        }
        else
        {
            emit intermediatePassed(cur_floor, cur_direction);
            timerMovement.start(TIME_BETWEEN_FLOORS);
            QString message = QStringLiteral("Лифт сейчас на %1 этаже.").arg(cur_floor);
            emit statusChanged(message);
        }
    }
}

void Cabin::stopOnFloor()
{
    state = WAITING;
    timerMovement.stop();
    QString message = QStringLiteral("Лифт остановился на %1 этаже.").arg(cur_floor);
    emit statusChanged(message);
    emit targetAchieved(cur_floor, cur_direction);
}

void Cabin::sendDoorsMessage(QString message)
{
    emit statusChanged(message);
}

void Cabin::getTarget(int floor)
{
    state = BUSY;
    target_floor = floor;
    if (cur_floor == target_floor)
    {
        emit stoppedOnTargetFloor();
    }
    else
    {
        cur_direction = target_floor > cur_floor ? UP : DOWN;
        emit move();
    }
}
