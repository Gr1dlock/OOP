#ifndef SCENE_MANAGER_H
#define SCENE_MANAGER_H

#include "base_manager.h"
#include "../exceptions/no_camera_exception.h"
#include "scene.h"

namespace scene
{

class SceneManager: public BaseManager
{
public:
    SceneManager();

    std::shared_ptr<Scene> getScene();
    void setCurrentCamera(std::string cam_name);
    std::shared_ptr<objects::Camera> getCurrentCamera();
private:
    std::shared_ptr<Scene> _scene;
    std::shared_ptr<objects::Camera> _current_camera;
};

}

#endif // SCENE_MANAGER_H
