#ifndef NO_CAMERA_EXCEPTION_H
#define NO_CAMERA_EXCEPTION_H

#include "base_exception.h"

namespace exceptions
{

class NoCameraException: public BaseException
{
public:
    NoCameraException() = default;
    explicit NoCameraException(std::string message)
        : BaseException(message)
    {}

    const char *what() const noexcept override
    {
        return "Camera wasn't set";
    }
};

}

#endif // NO_CAMERA_EXCEPTION_H
