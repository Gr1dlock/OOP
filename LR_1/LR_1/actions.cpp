#include "actions.h"

void RotateX(Dot &point, double angle)
{
    angle *= M_PI / 180;
    double y = point.y;
    double z = point.z;
    point.y = static_cast<int>(round(y * cos(angle) + z * sin(angle)));
    point.z = static_cast<int>(round(y * (-(sin(angle))) + z * cos(angle)));
}

void RotateY(Dot &point, double angle)
{
    angle *= M_PI / 180;
    double x = point.x;
    double z = point.z;
    point.x = static_cast<int>(round(x * cos(angle) - z * sin(angle)));
    point.z = static_cast<int>(round(x * sin(angle) + z * cos(angle)));
}

void RotateZ(Dot &point, double angle)
{
    angle *= M_PI / 180;
    double x = point.x;
    double y = point.y;
    point.x = static_cast<int>(round(x * cos(angle) + y * sin(angle)));
    point.y = static_cast<int>(round(x * (-(sin(angle))) + y * cos(angle)));
}

void TransferDot(Dot &point, const Transfer transfer)
{
    point.x += transfer.dx;
    point.y += transfer.dy;
    point.z += transfer.dz;
}

void ScaleDot(Dot &point, const Scale scale)
{
    point.x *= scale.kx;
    point.y *= scale.ky;
    point.z *= scale.kz;
}

void RotateDot(Dot &point, const Rotate rotate)
{
    if (abs(rotate.angle_x) > EPS)
        RotateX(point, rotate.angle_x);
    if (abs(rotate.angle_y) > EPS)
        RotateY(point, rotate.angle_y);
    if (abs(rotate.angle_z) > EPS)
        RotateZ(point, rotate.angle_z);
}

int RotateModel(const Rotate rotate, Model &frame_model)
{
    Dot *dots_array = nullptr;
    int rc = OK;
    if (frame_model.dots_count > 0)
    {
        dots_array = GetDots(frame_model);
        for (int i = 0; i < frame_model.dots_count; i++)
            RotateDot(dots_array[i], rotate);
    }
    else
        rc = ERR_EMPTY;
    return rc;
}

int TransferModel(const Transfer transfer, Model &frame_model)
{
    Dot *dots_array = nullptr;
    int rc = OK;
    if (frame_model.dots_count > 0)
    {
        dots_array = GetDots(frame_model);
        for (int i = 0; i < frame_model.dots_count; i++)
            TransferDot(dots_array[i], transfer);
    }
    else
        rc = ERR_EMPTY;
    return rc;
}

int ScaleModel(const Scale scale, Model &frame_model)
{
    Dot *dots_array = nullptr;
    int rc = OK;
    if (frame_model.dots_count > 0)
    {
        dots_array = GetDots(frame_model);
        for (int i = 0; i < frame_model.dots_count; i++)
            ScaleDot(dots_array[i], scale);
    }
    else
        rc = ERR_EMPTY;
    return rc;
}
