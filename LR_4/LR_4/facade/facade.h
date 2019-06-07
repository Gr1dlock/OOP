#ifndef FACADE_H
#define FACADE_H

#include "../mediator/mediator.h"
#include "../commands/basecommand.h"

namespace facade
{

class Facade
{
public:
    Facade();
    void executeCommand(commands::BaseCommand *command);
private:
    std::shared_ptr<mediator::Mediator> _mediator;
};

}

#endif // FACADE_H
