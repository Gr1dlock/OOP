#ifndef DOT_H
#define DOT_H

#include "stream.h"
#include "actions.h"
#include "draw.h"

struct Dot
{
    double x;
    double y;
    double z;
};

void freeDots(Dot **dots_array);
int allocateDots(Dot **dots_array, const int &dots_count);
int readDots(Dot *dots_array, STREAM *stream, const int& dots_count);
void saveDots(STREAM *stream, Dot *dots_array, const int &dots_count);
void transferDot(Dot &point, const Transfer transfer);
void transferDots(Dot *dots_array, const int &dots_count, const Transfer transfer);
void scaleDots(Dot *dots_array, const int &dots_count, const Scale scale);
void rotateDots(Dot *dots_array, const int &dots_count, const Rotate rotate);
void drawDots(MainScene &main_scene, Dot *dots_array, const int &dots_count);

#endif // DOT_H
