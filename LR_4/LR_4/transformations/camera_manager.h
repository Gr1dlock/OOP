#ifndef CAMERA_MANAGER_H
#define CAMERA_MANAGER_H

#include "base_manager.h"
#include "objects/camera.h"
#include <cmath>

namespace transformations
{

class CameraManager: public BaseManager
{
public:
    void yaw(std::shared_ptr<objects::Camera> camera, double angle);
    void roll(std::shared_ptr<objects::Camera> camera, double angle);
    void pitch(std::shared_ptr<objects::Camera> camera, double angle);
private:
    double degreesToRadians(double angle);
};
}

#endif // CAMERA_MANAGER_H
