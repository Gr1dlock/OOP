#include "composite.h"

namespace objects
{

void Composite::add(std::shared_ptr<Object> object)
{
    _objects.push_back(object);
}

void Composite::remove(size_t ind)
{
    auto iterator = _objects.begin();
    std::advance(iterator, ind);
    _objects.erase(iterator);
}

std::vector<std::shared_ptr<Object> > Composite::getObjects()
{
    return _objects;
}

void Composite::transform(const std::shared_ptr<math::Matrix> matrix)
{
    for (auto &obj: _objects) {
        obj->transform(matrix);
    }
}

void Composite::draw(std::shared_ptr<BaseDrawManager> drawer)
{
    drawer->draw(*this);
    for (auto &obj: _objects) {
        obj->draw(drawer);
    }
}

ssize_t Composite::getIndex(std::shared_ptr<Object> obj)
{
    for (size_t i = 0; i < _objects.size(); i++)
    {
        if (obj == _objects[i]) {
            return i;
        }
    }

    return -1;
}

} // namespace objects


