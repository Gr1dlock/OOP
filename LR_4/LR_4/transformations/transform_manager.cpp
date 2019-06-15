#include "transform_manager.h"

namespace transformations
{

void TransformManager::rotateObjectX(std::shared_ptr<objects::Object> obj, double angle)
{
    angle = degreesToRadians(angle);
    std::shared_ptr<math::Matrix> transform_matrix(new math::RotateOxMatrix(angle));
    obj->transform(transform_matrix);
}

void TransformManager::rotateObjectY(std::shared_ptr<objects::Object> obj, double angle)
{
    angle = degreesToRadians(angle);
    std::shared_ptr<math::Matrix> transform_matrix(new math::RotateOyMatrix(angle));
    obj->transform(transform_matrix);
}

void TransformManager::rotateObjectZ(std::shared_ptr<objects::Object> obj, double angle)
{
    angle = degreesToRadians(angle);
    std::shared_ptr<math::Matrix> transform_matrix(new math::RotateOzMatrix(angle));
    obj->transform(transform_matrix);
}

void TransformManager::moveObject(std::shared_ptr<objects::Object> obj, int x, int y, int z)
{
    std::shared_ptr<math::Matrix> transform_matrix(new math::MoveMatrix(x, y, z));
    obj->transform(transform_matrix);
}

void TransformManager::scaleObject(std::shared_ptr<objects::Object> obj, double x, double y, double z)
{
    std::shared_ptr<math::Matrix> transform_matrix(new math::ScaleMatrix(x, y, z));
    obj->transform(transform_matrix);
}

double TransformManager::degreesToRadians(double angle) {
    return angle / 180. * M_PI;
}

}
