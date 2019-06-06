#ifndef DRAWER_INIT_EXCEPTION_H
#define DRAWER_INIT_EXCEPTION_H

#include "base_exception.h"

namespace exceptions
{

class DrawerInitException: public BaseException
{
public:
    DrawerInitException() = default;
    explicit DrawerInitException(std::string message)
        : BaseException(message)
    {}

    const char *what() const noexcept override
    {
        return "Drawer wasn't initialized";
    }
};

}

#endif // DRAWER_INIT_EXCEPTION_H
