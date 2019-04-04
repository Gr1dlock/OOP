#ifndef ACTIONS_H
#define ACTIONS_H

#include <math.h>

#define EPS 0.000000001

struct Transfer
{
    int dx;
    int dy;
    int dz;
};

struct Rotate
{
    double angle_x;
    double angle_y;
    double angle_z;
};

struct Scale
{
    double kx;
    double ky;
    double kz;
};


#endif // ACTIONS_H
