#ifndef DRAW_H
#define DRAW_H

#include <cmath>
#include "main_scene.h"

void drawLine(MainScene &main_scene, const double &x1, const double &y1, const double &x2, const double &y2);
void drawPeak(MainScene &main_scene, const double &x, const double &y);
void clearScene(MainScene &main_scene);

#endif // DRAW_H
