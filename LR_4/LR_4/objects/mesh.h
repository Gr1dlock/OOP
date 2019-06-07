#ifndef MESH_H
#define MESH_H

#include <memory>
#include "../exceptions/model_build_exception.h"
#include "../math/matrix.h"
#include "../math/point.h"

namespace objects
{


class Mesh
{
public:
    void addPoint(math::Point &p);
    void addEdge(size_t first, size_t second);
    void transform(const std::shared_ptr<math::Matrix> matrix);
    std::vector<std::pair<math::Point, math::Point>> getLines();
private:
    std::vector<math::Point> _points;
    std::vector<std::pair<size_t, size_t>> _edges;
};

}

#endif // MESH_H
