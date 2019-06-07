#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QFileDialog>
#include <memory>
#include "drawlabel.h"
#include "math/point.h"
#include "commands/add_model_command.h"
#include "commands/draw_command.h"
#include "commands/set_camera.h"
#include "commands/add_camera_command.h"
#include "commands/transform_model_command.h"
#include "commands/yaw_camera_command.h"
#include "commands/roll_camera_command.h"
#include "commands/pitch_camera_command.h"
#include "commands/transform_model_command.h"
#include "commands/move_camera_command.h"
#include "commands/remove_model_command.h"
#include "commands/remove_camera_command.h"
#include "exceptions/file_open_exception.h"
#include "exceptions/no_camera_exception.h"
#include "facade/facade.h"
#include "draw/qt_drawer.h"

namespace Ui {
class MainWindow;
}

using facade::Facade;
using math::Point;

class MainWindow : public QWidget
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

public slots:
    void moveObject();
    void scaleObject();
    void rotateObjectX();
    void rotateObjectY();
    void rotateObjectZ();

    void addModel();
    void addCamera();
    void removeObject();
    void setCamera();

private:
    Ui::MainWindow *ui;
    DrawLabel *_draw_label;
    QPixmap _pixmap;
    std::unique_ptr<Facade> _facade;
    size_t _elements_num;

    void render();
};

#endif // WIDGET_H
