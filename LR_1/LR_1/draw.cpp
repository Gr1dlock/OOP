#include "draw.h"



void DrawDot(Dot &point, MainScene &main_scene)
{
    QGraphicsScene *scene = GetScene(main_scene);
    QBrush brush(Qt::white, Qt::SolidPattern);
    QPen pen(Qt::white);
    scene->addEllipse(QRect(QPoint(point.x + main_scene.center_x -3,
                                      main_scene.center_y - point.y -3),
                            QPoint(point.x + main_scene.center_x + 3,
                                      main_scene.center_y - point.y + 3)),
                      pen, brush);
}


void DrawEdge(Dot &first, Dot &second, MainScene &main_scene)
{
    QGraphicsScene *scene = GetScene(main_scene);
    QBrush brush(Qt::white, Qt::SolidPattern);
    QPen pen(brush, 3);
    scene->addLine(main_scene.center_x + first.x, main_scene.center_y - first.y,
                   main_scene.center_x + second.x, main_scene.center_y - second.y, pen);
}


int DrawModel(MainScene &main_scene, Model &frame_model)
{
    int rc = OK;
    int first, second;
    QGraphicsScene *scene = GetScene(main_scene);
    Dot *dots_array = GetDots(frame_model);
    Edge *edges_array = GetEdges(frame_model);
    if (frame_model.dots_count > 0 && frame_model.edges_count > 0)
    {
        scene->clear();
        for (int i = 0; i < frame_model.dots_count; i++)
            DrawDot(dots_array[i], main_scene);
        for (int i = 0; i < frame_model.edges_count; i++)
        {
            first = edges_array[i].first;
            second = edges_array[i].second;
            DrawEdge(dots_array[first], dots_array[second], main_scene);
        }
    }
    else
        rc = ERR_EMPTY;
    return rc;
}


int ClearModel(MainScene &main_scene, Model &frame_model)
{
    int rc = OK;
    QGraphicsScene *scene = GetScene(main_scene);
    if (frame_model.dots_count > 0 && frame_model.edges_count > 0)
    {
        scene->clear();
        FreeModel(frame_model);
    }
    else
        rc = ERR_EMPTY;
    return rc;
}
