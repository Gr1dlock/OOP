#ifndef ACTIONS_H
#define ACTIONS_H

#include <math.h>
#include "model.h"
#include "errors.h"

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

int RotateModel(const Rotate rotate, Model &frame_model);
int TransferModel(const Transfer transfer, Model &frame_model);
int ScaleModel(const Scale scale, Model &frame_model);

#endif // ACTIONS_H
