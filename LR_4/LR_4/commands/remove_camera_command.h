#ifndef REMOVE_CAMERA_COMMAND_H
#define REMOVE_CAMERA_COMMAND_H

#include "basecommand.h"


namespace commands
{

class RemoveCameraCommand: public BaseCommand
{
public:
    RemoveCameraCommand(std::string object_name);
    void execute(std::shared_ptr<mediator::Mediator> mediator) override;
private:
    std::string _object_name;
};

}

#endif // REMOVE_CAMERA_COMMAND_H
