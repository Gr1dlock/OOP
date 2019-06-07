#ifndef OBJECT_H
#define OBJECT_H

#include <memory>
#include <string>
#include "../draw/base_draw_manager.h"
#include "../math/point.h"
#include "../math/matrix.h"

namespace objects
{

using math::Matrix;

class Object
{
public:
    Object() = default;
    Object(std::string name): _name(name) {}
    virtual ~Object() = default;
    virtual void transform(const std::shared_ptr<Matrix>) = 0;
    virtual void draw(std::shared_ptr<BaseDrawManager> drawer) = 0;
    std::string getName() { return _name; }
private:
    std::string _name;
};

}
#endif // OBJECT_H
