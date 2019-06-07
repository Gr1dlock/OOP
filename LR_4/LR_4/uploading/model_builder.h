#ifndef MODEL_BUILDER_H
#define MODEL_BUILDER_H

#include "memory"
#include "../objects/model.h"

namespace uploading
{

class ModelBuilder
{
public:
    ModelBuilder() = default;

    void reset(std::string name);
    void addPoint(math::Point &point);
    void addEdge(size_t first, size_t second);
    std::shared_ptr<objects::Model> getResult();

private:
    std::shared_ptr<objects::Model> _model;
};

} // namespace uploading

#endif // MODEL_BUILDER_H
