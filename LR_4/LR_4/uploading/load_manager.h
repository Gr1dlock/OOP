#ifndef MODEL_LOADER_H
#define MODEL_LOADER_H

#include "model_builder.h"
#include "base_load_manager.h"
#include "memory"
#include "base_loader.h"

namespace uploading
{

using objects::Model;

class LoadManager: public BaseLoadManager
{
public:
    explicit LoadManager(BaseLoader *loader);
    std::shared_ptr<Model> loadModel(std::string source_name, std::string model_name) override;
private:
    std::unique_ptr<BaseLoader> _loader;
    std::unique_ptr<ModelBuilder> _builder;
};

} // namespace uploading

#endif // MODEL_LOADER_H
