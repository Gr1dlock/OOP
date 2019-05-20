#ifndef ELEVATOR_H
#define ELEVATOR_H

#include <QWidget>
#include "controlpanel.h"
#include "cabin.h"


class Elevator : public QWidget
{
    Q_OBJECT

public:
    explicit Elevator(QWidget *parent = nullptr);
    ControlPanel *getControlPanel();

private:
    Cabin cabin;
    ControlPanel control_panel;

signals:
    void forwardMessage(QString message);

private slots:
    void sendStatus(QString message);
};

#endif // ELEVATOR_H
