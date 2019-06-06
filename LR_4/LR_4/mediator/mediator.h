#ifndef MEDIATOR_H
#define MEDIATOR_H

#include <memory>
#include "../exceptions/object_type_exception.h"
#include "../math/point.h"
#include "../draw/draw_manager.h"
#include "../transformations/transform_manager.h"
#include "../transformations/camera_manager.h"
#include "../uploading/file_loader.h"
#include "../uploading/load_manager.h"
#include "../scene/scene_manager.h"
#include "../objects/model.h"
#include "../objects/composite.h"

namespace mediator
{

class Mediator
{
public:
    Mediator();

    void addModel(std::string file_name, std::string model_name);
    void addCamera(std::string cam_name);
    void setCamera(std::string cam_name);
    void removeCamera(std::string cam_name);
    void removeModel(std::string model_name);

    void transformCamera(std::string cam_name,  math::Point &move,  math::Point &rotate);
    void transformModel(std::string model_name,  math::Point &move,  math::Point &scale,  math::Point &rotate);

    void draw(std::shared_ptr<draw::BaseDrawer> drawer);
private:
    std::shared_ptr<draw::DrawManager> _draw_manager;
    uploading::LoadManager _load_manager;
    transformations::TransformManager _transform_manager;
    transformations::CameraManager _cam_manager;
    scene::SceneManager _scene_manager;
};

}

#endif // MEDIATOR_H
