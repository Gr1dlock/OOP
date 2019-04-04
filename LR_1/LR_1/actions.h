#ifndef ACTIONS_H
#define ACTIONS_H

#include <cmath>

#define EPS 0.000000001

struct Transfer
{
    double dx;
    double dy;
    double dz;
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

void rotateX(double &y, double &z, double angle);
void rotateY(double &x, double &z, double angle);
void rotateZ(double &x, double &y, double angle);
void transferX(double &x, const double &dx);
void transferY(double &y, const double &dy);
void transferZ(double &z, const double &dz);
void scaleX(double &x, const double &kx);
void scaleY(double &y, const double &ky);
void scaleZ(double &z, const double &kz);

#endif // ACTIONS_H
