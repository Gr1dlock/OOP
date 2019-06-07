#ifndef MODEL_BUILD_EXCEPTION_H
#define MODEL_BUILD_EXCEPTION_H

#include "base_exception.h"

namespace exceptions
{

class ModelBuildException: public BaseException
{
public:
    ModelBuildException() = default;
    explicit ModelBuildException(std::string message)
        : BaseException(message)
    {}

    const char *what() const noexcept override
    {
        return "Error while building model";
    }
};

}

#endif // MODEL_BUILD_EXCEPTION_H
