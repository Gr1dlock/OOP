#ifndef MAIN_SCENE_H
#define MAIN_SCENE_H
#include <QGraphicsScene>

struct MainScene
{
    QGraphicsScene *scene;
    int center_x;
    int center_y;
    QRect rect;
};


QGraphicsScene *getScene(const MainScene &main_scene);

#endif // MAIN_SCENE_H
