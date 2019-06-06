#ifndef BASE_LOAD_MANAGER_H
#define BASE_LOAD_MANAGER_H

#include "memory"
#include "base_loader.h"
#include "objects/model.h"

namespace uploading
{

class BaseLoadManager
{
public:
    BaseLoadManager() = default;
    virtual ~BaseLoadManager() = default;
    virtual std::shared_ptr< objects::Model> loadModel(std::string source_name, std::string model_name) = 0;
};

}

#endif // BASE_LOAD_MANAGER_H
