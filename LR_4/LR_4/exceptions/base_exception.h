#ifndef BASE_EXCEPTION_H
#define BASE_EXCEPTION_H

#include <string>
#include <exception>

namespace exceptions
{

class BaseException: public std::exception
{
public:
    BaseException() = default;
    explicit BaseException(std::string &message)
        : _message(message)
    {}

    const char *what() const noexcept override
    {
        return "Exception throed";
    }
    const std::string &getMessage() const noexcept
    {
        return _message;
    }

private:
    std::string _message;
};

}
#endif // BASE_EXCEPTION_H
