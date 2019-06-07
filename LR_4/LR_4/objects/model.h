#ifndef MODEL_H
#define MODEL_H

#include <vector>
#include "object.h"
#include "mesh.h"
#include "../math/point.h"

namespace objects
{

class Model: public Object
{
public:
    Model(std::string);

    void addPoint(math::Point &p);
    void addEdge(size_t first, size_t second);
    void transform(const std::shared_ptr<Matrix> matrix) override;
    void draw(std::shared_ptr<BaseDrawManager> drawer) override;
    std::shared_ptr<Mesh> getMesh() { return _mesh; }

private:
    std::shared_ptr<Mesh> _mesh;
};

}

#endif // MODEL_H
