#include "dot.h"

void freeDots(Dot **dots_array)
{
    delete [] *dots_array;
    *dots_array = nullptr;
}

int allocateDots(Dot **dots_array, const int &dots_count)
{
    int rc = OK;
    if (dots_count <= 0) return ERR_IO;
    *dots_array =  new Dot[dots_count];
    if (!(*dots_array))
    {
        rc = ERR_MEM;
    }
    return rc;
}

int readDots(Dot *dots_array, STREAM *stream, const int& dots_count)
{
    int rc = OK;

    for (int i = 0; i < dots_count && rc == OK; i++)
    {
        if (fscanf(stream, "%lf %lf %lf", &(dots_array[i].x),
                   &(dots_array[i].y),
                   &(dots_array[i].z)) != 3)
            rc = ERR_IO;
    }
    return rc;
}

void saveDots(STREAM *stream, Dot *dots_array, const int &dots_count)
{
    for (int i = 0; i < dots_count; i++)
        fprintf(stream, "%lf %lf %lf\n", dots_array[i].x,
                dots_array[i].y,
                dots_array[i].z);
}

void drawDots(MainScene &main_scene, Dot *dots_array, const int &dots_count)
{
    for (int i = 0; i < dots_count; i++)
        drawPeak(main_scene, dots_array[i].x, dots_array[i].y);
}

void transferDots(Dot *dots_array, const int &dots_count, const Transfer transfer)
{
    if (abs(transfer.dx) > EPS)
        for (int i = 0; i < dots_count; i++)
            transferX(dots_array[i].x, transfer.dx);
    if (abs(transfer.dy) > EPS)
        for (int i = 0; i < dots_count; i++)
            transferY(dots_array[i].y, transfer.dy);
    if (abs(transfer.dz) > EPS)
        for (int i = 0; i < dots_count; i++)
            transferZ(dots_array[i].z, transfer.dz);
}

void scaleDots(Dot *dots_array, const int &dots_count, const Scale scale)
{
    if (abs(scale.kx) > EPS)
        for (int i = 0; i < dots_count; i++)
            scaleX(dots_array[i].x, scale.kx);
    if (abs(scale.ky) > EPS)
        for (int i = 0; i < dots_count; i++)
            scaleY(dots_array[i].y, scale.ky);
    if (abs(scale.kz) > EPS)
        for (int i = 0; i < dots_count; i++)
            scaleZ(dots_array[i].z, scale.kz);
}

void rotateDots(Dot *dots_array, const int &dots_count, const Rotate rotate)
{
    if (abs(rotate.angle_x) > EPS)
        for (int i = 0; i < dots_count; i++)
            rotateX(dots_array[i].y, dots_array[i].z, rotate.angle_x);
    if (abs(rotate.angle_y) > EPS)
        for (int i = 0; i < dots_count; i++)
            rotateY(dots_array[i].x, dots_array[i].z, rotate.angle_y);
    if (abs(rotate.angle_z) > EPS)
        for (int i = 0; i < dots_count; i++)
            rotateZ(dots_array[i].x, dots_array[i].y, rotate.angle_z);
}
