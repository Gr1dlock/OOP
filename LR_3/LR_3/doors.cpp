#include "doors.h"

Doors::Doors()
{
    state = CLOSED;
    connect(&timerOpenDoors, SIGNAL(timeout()), this, SLOT(openDoors()));
    connect(&timerWaitOnFloor, SIGNAL(timeout()), this, SLOT(closingDoors()));
    connect(&timerCloseDoors, SIGNAL(timeout()), this, SLOT(closeDoors()));
    timerCloseDoors.setSingleShot(true);
    timerOpenDoors.setSingleShot(true);
}

void Doors::openDoors()
{
    if (state == OPENING)
    {
        state = OPENED;
        QString message = "Двери открыты.";
        statusChanged(message);
        timerWaitOnFloor.start(TIME_DOORS_WAITING);
    }
}

void Doors::closeDoors()
{
    if (state == CLOSING)
    {
        state = CLOSED;
        QString message = "Двери закрыты.";
        statusChanged(message);
        emit closedDoors();
    }
    else if (state == CLOSED)
    {
        emit closedDoors();
    }
}

void Doors::openingDoors()
{
    if (state == CLOSED)
    {
        state = OPENING;
        QString message = "Двери открываются.";
        statusChanged(message);
        timerOpenDoors.start(TIME_DOORS_OPENING);
    }
    if (state == CLOSING)
    {
        state = OPENING;
        QString message = "Двери открываются.";
        statusChanged(message);
        int t = timerCloseDoors.remainingTime();
        timerCloseDoors.stop();
        timerOpenDoors.start(TIME_DOORS_OPENING - t);
    }
}

void Doors::closingDoors()
{
    if (state == OPENED)
    {
        state = CLOSING;
        QString message = "Двери закрываются.";
        statusChanged(message);
        timerCloseDoors.start(TIME_DOORS_OPENING);
    }
}
