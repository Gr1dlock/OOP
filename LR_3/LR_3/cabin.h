#ifndef CABIN_H
#define CABIN_H

#include <QObject>
#include "doors.h"

class Cabin : public QObject
{
    Q_OBJECT

    enum CabinState { WAITING, MOVING, BUSY };

public:
    Cabin();

private:
    CabinState state;
    Direction cur_direction;
    int cur_floor;
    int target_floor;
    Doors doors;
    QTimer timerMovement;

private slots:
    void movement();
    void getTarget(int floor);
    void stopOnFloor();
    void sendDoorsMessage(QString message);
signals:
    void statusChanged(QString message);
    void targetAchieved(int floor, Direction direction);
    void intermediatePassed(int floor, Direction direction);
    void stoppedOnTargetFloor();
    void move();
};

#endif // CABIN_H
