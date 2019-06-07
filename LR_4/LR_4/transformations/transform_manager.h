#ifndef TRANSFORM_MANAGER_H
#define TRANSFORM_MANAGER_H

#include <memory>
#include <cmath>
#include "../math/point.h"
#include "../math/transform_matrix.h"
#include "../objects/model.h"
#include "../objects/camera.h"
#include "base_manager.h"

namespace transformations
{

class TransformManager: public BaseManager
{
public:   
    void rotateObjectX(std::shared_ptr<objects::Object> obj, double angle);
    void rotateObjectY(std::shared_ptr<objects::Object> obj, double angle);
    void rotateObjectZ(std::shared_ptr<objects::Object> obj, double angle);
    void moveObject(std::shared_ptr<objects::Object> obj, int x, int y, int z);
    void scaleObject(std::shared_ptr<objects::Object> obj, double x, double y, double z);
    void projectPoint(math::Point &p, const objects::Camera &camera);

private:
    double degreesToRadians(double angle);
};

}

#endif //TRANSFORM_MANAGER_H
