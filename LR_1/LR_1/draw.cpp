#include "draw.h"

void drawLine(MainScene &main_scene, const double &x1, const double &y1, const double &x2, const double &y2)
{

    QGraphicsScene *scene = getScene(main_scene);
    QBrush brush(Qt::white, Qt::SolidPattern);
    QPen pen(brush, 3);
    int int_x1 = static_cast<int>(round(x1));
    int int_x2 = static_cast<int>(round(x2));
    int int_y1 = static_cast<int>(round(y1));
    int int_y2 = static_cast<int>(round(y2));
    scene->addLine(main_scene.center_x + int_x1, main_scene.center_y - int_y1,
                   main_scene.center_x + int_x2, main_scene.center_y - int_y2, pen);

}

void drawPeak(MainScene &main_scene, const double &x, const double &y)
{
    QGraphicsScene *scene = getScene(main_scene);
    QBrush brush(Qt::white, Qt::SolidPattern);
    int int_x = static_cast<int>(round(x));
    int int_y = static_cast<int>(round(y));
    QPen pen(Qt::white);
    scene->addEllipse(QRect(QPoint(int_x + main_scene.center_x - 3,
                                      main_scene.center_y - int_y -3),
                            QPoint(int_x + main_scene.center_x + 3,
                                      main_scene.center_y - int_y + 3)),
                      pen, brush);
}

void clearScene(MainScene &main_scene)
{
    QGraphicsScene *scene = getScene(main_scene);
    scene->clear();
}
