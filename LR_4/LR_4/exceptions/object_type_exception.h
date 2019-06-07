#ifndef OBJECT_TYPE_EXCEPTION_H
#define OBJECT_TYPE_EXCEPTION_H

#include "base_exception.h"

namespace exceptions
{

class ObjectTypeException: public BaseException
{
public:
    ObjectTypeException() = default;
    explicit ObjectTypeException(std::string message)
        : BaseException(message)
    {}

    const char *what() const noexcept override
    {
        return "Wrong object type";
    }
};

}

#endif // OBJECT_TYPE_EXCEPTION_H
