#ifndef NO_OBJECT_EXCEPTION_H
#define NO_OBJECT_EXCEPTION_H

#include "base_exception.h"

namespace exceptions
{

class NoObjectException: public BaseException
{
public:
    NoObjectException() = default;
    explicit NoObjectException(std::string message)
        : BaseException(message)
    {}

    const char *what() const noexcept override
    {
        return "Object wasn't found";
    }
};

}

#endif // NO_OBJECT_EXCEPTION_H
