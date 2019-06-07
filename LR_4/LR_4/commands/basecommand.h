#ifndef BASE_COMMAND_H
#define BASE_COMMAND_H

#include "../mediator/mediator.h"

namespace commands
{

class BaseCommand
{
public:
    virtual ~BaseCommand() = default;
    virtual void execute(std::shared_ptr<mediator::Mediator> mediator) = 0;
};

}

#endif // BASE_COMMAND_H
