#include "mediator.h"

namespace mediator
{

Mediator::Mediator():
    _draw_manager(new draw::DrawManager),
    _load_manager(new uploading::FileLoader)
{}

void Mediator::addModel(std::string file_name, std::string name)
{
    std::shared_ptr<objects::Model> model = _load_manager.loadModel(file_name, name);
    _scene_manager.getScene()->addModel(std::shared_ptr<objects::Model>(model));
}

void Mediator::addCamera(std::string name)
{
    auto camera = new objects::Camera(name);
    _scene_manager.getScene()->addCamera(std::shared_ptr<objects::Camera>(camera));
}

void Mediator::setCamera(std::string cam_name)
{
    _scene_manager.setCurrentCamera(cam_name);
}

void Mediator::removeCamera(std::string cam_name)
{
    _scene_manager.getScene()->removeCamera(cam_name);
}

void Mediator::removeModel(std::string model_name)
{
    auto scene = _scene_manager.getScene();
    scene->removeModel(scene->getObject(model_name));
}

void Mediator::transformCamera(std::string cam_name, math::Point &move, math::Point &rotate)
{
    auto camera = _scene_manager.getScene()->getCamera(cam_name);
    _transform_manager.moveObject(camera, move.x(), move.y(), move.z());
    _cam_manager.roll(camera, rotate.x());
    _cam_manager.pitch(camera, rotate.y());
    _cam_manager.yaw(camera, rotate.z());
}

void Mediator::transformModel(std::string model_name, math::Point &move, math::Point &scale, math::Point &rotate)
{
    auto obj = _scene_manager.getScene()->getObject(model_name);
    _transform_manager.moveObject(obj, move.x(), move.y(), move.z());
    _transform_manager.scaleObject(obj, scale.x(), scale.y(), scale.z());
    _transform_manager.rotateObjectX(obj, rotate.x());
    _transform_manager.rotateObjectY(obj, rotate.y());
    _transform_manager.rotateObjectZ(obj, rotate.z());
}

void Mediator::draw(std::shared_ptr<draw::BaseDrawer> drawer)
{
    _draw_manager->setDrawer(drawer);
    _draw_manager->setCamera(_scene_manager.getCurrentCamera());
    _scene_manager.getScene()->getModelsComposite()->draw(_draw_manager);
}

}
