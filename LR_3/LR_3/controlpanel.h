#ifndef CONTROLPANEL_H
#define CONTROLPANEL_H

#include <QWidget>
#include <QPushButton>
#include <QLayout>
#include "timing.h"


class ControlPanel : public QWidget
{
    Q_OBJECT

    enum ElevatorState { FREE, BUSY };

public:
    explicit ControlPanel(QWidget *parent = nullptr);

private:
    bool findFloor(int &floor);
    QVBoxLayout *buttons_layout;
    QVector<QPushButton*> buttons_list;
    QVector<bool> floors_targets;
    ElevatorState state;
    int cur_floor;
    Direction cur_direction;


signals:
    void callToFloor(int floor);
    void statusChanged(QString message);


private slots:
    void buttonClicked();
    void reachedTargetFloor(int floor, Direction direction);
    void reachedIntermediateFloor(int floor, Direction direction);

};

#endif // CONTROLPANEL_H
