#ifndef REMOVE_OBJECT_COMMAND_H
#define REMOVE_OBJECT_COMMAND_H

#include "basecommand.h"


namespace commands
{

class RemoveModelCommand: public BaseCommand
{
public:
    RemoveModelCommand(std::string object_name);
    void execute(std::shared_ptr<mediator::Mediator> mediator) override;
private:
    std::string _object_name;
};

}

#endif // REMOVE_OBJECT_COMMAND_H
