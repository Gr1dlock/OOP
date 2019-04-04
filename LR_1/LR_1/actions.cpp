#include "actions.h"

void rotateX(double &y, double &z, double angle)
{
    angle *= M_PI / 180;
    double tmp_y = y;
    double tmp_z = z;
    y = tmp_y * cos(angle) + tmp_z * sin(angle);
    z = tmp_y * (-(sin(angle))) + tmp_z * cos(angle);
}

void rotateY(double &x, double &z, double angle)
{
    angle *= M_PI / 180;
    double tmp_x = x;
    double tmp_z = z;
    x = tmp_x * cos(angle) - tmp_z * sin(angle);
    z = tmp_x * sin(angle) + tmp_z * cos(angle);
}

void rotateZ(double &x, double &y, double angle)
{
    angle *= M_PI / 180;
    double tmp_x = x;
    double tmp_y = y;
    x = tmp_x * cos(angle) + tmp_y * sin(angle);
    y = tmp_x * (-(sin(angle))) + tmp_y * cos(angle);
}

void transferX(double &x, const double &dx)
{
    x += dx;
}

void transferY(double &y, const double &dy)
{
    y += dy;
}

void transferZ(double &z, const double &dz)
{
    z += dz;
}

void scaleX(double &x, const double &kx)
{
    x *= kx;
}

void scaleY(double &y, const double &ky)
{
   y *= ky;
}

void scaleZ(double &z, const double &kz)
{
    z *= kz;
}
