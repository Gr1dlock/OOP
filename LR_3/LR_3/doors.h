#ifndef DOORS_H
#define DOORS_H

#include <QObject>
#include "QTimer"
#include "timing.h"

class Doors : public QObject
{
    Q_OBJECT
    enum DoorsState { OPENED, OPENING, CLOSING, CLOSED };

public:
    Doors();

private:
    DoorsState state;
    QTimer timerOpenDoors;
    QTimer timerCloseDoors;
    QTimer timerWaitOnFloor;

signals:
    void statusChanged(QString message);
    void closedDoors();

private slots:
    void closeDoors();
    void openDoors();
    void openingDoors();
    void closingDoors();

};

#endif // DOORS_H
