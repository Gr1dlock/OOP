#include "controlpanel.h"

ControlPanel::ControlPanel(QWidget *parent) : QWidget(parent)
{
    buttons_layout = new QVBoxLayout;
    this->setLayout(buttons_layout);
    for (int i = 1; i <= FLOORS; i++)
    {
        QPushButton *button = new QPushButton(QString::number(i), this);
        buttons_list.push_back(button);
        buttons_layout->addWidget(button);
        connect(button, SIGNAL(clicked()), this, SLOT(buttonClicked()));
        floors_targets.append(false);
    }
    state = FREE;
    cur_floor = 1;
    cur_direction = NO_DIRECTION;
}

void ControlPanel::buttonClicked()
{
    state = BUSY;
    QPushButton *button = qobject_cast<QPushButton*>(sender());
    QString floor_str = button->text();
    int floor = floor_str.toInt();
    if (!floors_targets[floor - 1])
    {
        QString message = QStringLiteral("Лифт вызван на %1 этаж.").arg(floor);
        emit statusChanged(message);
        floors_targets[floor - 1] = true;
        findFloor(floor);
        emit callToFloor(floor);
    }
}

bool ControlPanel::findFloor(int &floor)
{
    int step = cur_direction == UP ? 1 : -1;
    for (int i = cur_floor - 1; i < FLOORS && i >= 0; i += step)
    {
        if (floors_targets[i])
        {
            floor = i + 1;
            return true;
        }
    }
    step *= -1;
    for (int i = cur_floor - 1; i < FLOORS && i >= 0; i += step)
    {
        if (floors_targets[i])
        {
            floor = i + 1;
            return true;
        }
    }
    return false;
}


void ControlPanel::reachedTargetFloor(int floor, Direction direction)
{
    if (state == BUSY)
    {
        cur_floor = floor;
        cur_direction = direction;
        floors_targets[floor - 1] = false;
        if (findFloor(floor))
        {
            emit callToFloor(floor);
        }
        else
        {
            state = FREE;
        }
    }

}

void ControlPanel::reachedIntermediateFloor(int floor, Direction direction)
{
    cur_floor = floor;
    cur_direction = direction;
}
