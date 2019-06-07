#ifndef SCENE_H
#define SCENE_H

#include <unordered_map>
#include <memory>
#include "../exceptions/no_camera_exception.h"
#include "../exceptions/no_object_exception.h"
#include "../objects/object.h"
#include "../objects/camera.h"
#include "../objects/model.h"
#include "../objects/composite.h"


namespace scene
{

using namespace objects;

class Scene
{
public:
    Scene();

    void addModel(std::shared_ptr<objects::Model> obj);
    void addCamera(std::shared_ptr<objects::Camera> obj);
    void removeModel(std::shared_ptr<objects::Object> obj);
    void removeCamera(std::string cam_name);

    std::shared_ptr<objects::Composite> getModelsComposite();
    std::shared_ptr<objects::Camera> getCamera(std::string cam_name);
    std::shared_ptr<objects::Object> getObject(std::string model_name);
    std::vector<std::shared_ptr<objects::Object>> getObjects();
private:
    std::shared_ptr<objects::Composite> _objects;
    std::unordered_map<std::string, std::shared_ptr<objects::Camera>> _cameras;
};

}

#endif //SCENE_H
