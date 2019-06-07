#include "camera_manager.h"

namespace transformations
{

void CameraManager::yaw(std::shared_ptr<objects::Camera> camera, double angle)
{
    double cur_angle = camera->getZAngle();
    camera->setZAngle(degreesToRadians(angle) + cur_angle);
}

void CameraManager::roll(std::shared_ptr<objects::Camera> camera, double angle)
{
    double cur_angle = camera->getXAngle();
    camera->setXAngle(degreesToRadians(angle) + cur_angle);
}

void CameraManager::pitch(std::shared_ptr<objects::Camera> camera, double angle)
{
    double cur_angle = camera->getYAngle();
    camera->setYAngle(degreesToRadians(angle) + cur_angle);
}

double CameraManager::degreesToRadians(double angle)
{
    return angle / 180. * 3.1415926535;
}

} // namespace transformations
