#include "dot.h"

void freeDots(Dot **dots_array)
{
    delete [] *dots_array;
    *dots_array = nullptr;
}

int allocateDots(Dot **dots_array, const int &dots_count)
{
    int rc = OK;
    if (dots_count > 0)
    {
        *dots_array =  new Dot[dots_count];
        if (!(*dots_array))
            rc = ERR_MEM;
    }
    else
        rc = ERR_IO;
    return rc;
}

int readDots(Dot *dots_array, FILE *file, const int& dots_count)
{
    int rc = OK;
    for (int i = 0; i < dots_count; i++)
    {
        if (fscanf(file, "%d %d %d", &(dots_array[i].x),
                   &(dots_array[i].y),
                   &(dots_array[i].z)) != 3)
            rc = ERR_IO;
    }
    return rc;
}

void printDots(FILE *file, Dot *dots_array, const int &dots_count)
{
    for (int i = 0; i < dots_count; i++)
        fprintf(file, "%d %d %d\n", dots_array[i].x,
                dots_array[i].y,
                dots_array[i].z);
}

void drawDot(MainScene &main_scene, const Dot &point)
{
    QGraphicsScene *scene = getScene(main_scene);
    QBrush brush(Qt::white, Qt::SolidPattern);
    QPen pen(Qt::white);
    scene->addEllipse(QRect(QPoint(point.x + main_scene.center_x -3,
                                      main_scene.center_y - point.y -3),
                            QPoint(point.x + main_scene.center_x + 3,
                                      main_scene.center_y - point.y + 3)),
                      pen, brush);
}

void transferDot(Dot &point, const Transfer transfer)
{
    point.x += transfer.dx;
    point.y += transfer.dy;
    point.z += transfer.dz;
}

void scaleDot(Dot &point, const Scale scale)
{
    point.x *= scale.kx;
    point.y *= scale.ky;
    point.z *= scale.kz;
}

void rotateDot(Dot &point, const Rotate rotate)
{
    if (abs(rotate.angle_x) > EPS)
        rotateX(point.y, point.z, rotate.angle_x);
    if (abs(rotate.angle_y) > EPS)
        rotateY(point.x, point.z, rotate.angle_y);
    if (abs(rotate.angle_z) > EPS)
        rotateZ(point.x, point.y, rotate.angle_z);
}
