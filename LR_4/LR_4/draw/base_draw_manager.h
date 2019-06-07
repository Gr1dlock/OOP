#ifndef BASE_DRAW_MANAGER_H
#define BASE_DRAW_MANAGER_H

namespace objects
{

class Model;
class Camera;
class Composite;

class BaseDrawManager
{
public:
    BaseDrawManager() = default;
    virtual ~BaseDrawManager() = default;

    virtual void draw(Camera &camera) = 0;
    virtual void draw(Model &model) = 0;
    virtual void draw(Composite &composite) = 0;
};

}

#endif
