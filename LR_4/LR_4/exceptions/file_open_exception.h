#ifndef FILE_OPEN_EXCEPTION_H
#define FILE_OPEN_EXCEPTION_H

#include "base_exception.h"

namespace exceptions
{

class FileOpenException: public BaseException
{
public:
    FileOpenException() = default;
    explicit FileOpenException(std::string message)
        : BaseException(message)
    {}

    const char *what() const noexcept override
    {
        return "File wasn't opened";
    }
};

}

#endif // FILE_OPEN_EXCEPTION_H
