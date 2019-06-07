#ifndef DRAW_MANAGER_H
#define DRAW_MANAGER_H

#include <memory>
#include "base_manager.h"
#include "base_drawer.h"
#include "../exceptions/drawer_exception.h"
#include "base_draw_manager.h"
#include "../objects/object.h"
#include "../objects/model.h"
#include "../objects/camera.h"
#include "../math/point.h"
#include "../math/transform_matrix.h"

namespace draw
{

using namespace objects;

class DrawManager: public BaseDrawManager, public BaseManager
{
public:
    void setDrawer(std::shared_ptr<BaseDrawer> drawer);
    void setCamera(std::shared_ptr<Camera> camera);
    void draw(objects::Model &model) override;
    void draw(objects::Composite &composite) override;
    void draw(objects::Camera &camera) override;

private:
    std::shared_ptr<BaseDrawer> _drawer;
    std::shared_ptr<Camera> _camera;

    void proectPoint(math::Point &point);
};

}

#endif //DRAW_MANAGER_H
