#include "elevator.h"

Elevator::Elevator(QWidget *parent) : QWidget(parent)
{
    connect(&cabin, SIGNAL(intermediatePassed(int, Direction)), &control_panel, SLOT(reachedIntermediateFloor(int, Direction)));
    connect(&cabin, SIGNAL(targetAchieved(int, Direction)), &control_panel, SLOT(reachedTargetFloor(int, Direction)));
    connect(&control_panel, SIGNAL(callToFloor(int)), &cabin, SLOT(getTarget(int)));
    connect(&cabin, SIGNAL(statusChanged(QString)), this, SLOT(sendStatus(QString)));
    connect(&control_panel, SIGNAL(statusChanged(QString)), this, SLOT(sendStatus(QString)));
}

ControlPanel *Elevator::getControlPanel()
{
    return &control_panel;
}

void Elevator::sendStatus(QString message)
{
    emit forwardMessage(message);
}

