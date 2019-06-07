#ifndef MOVE_CAMERA_COMMAND_H
#define MOVE_CAMERA_COMMAND_H

#include "basecommand.h"
#include "../math/point.h"


namespace commands
{

class MoveCameraCommand: public BaseCommand
{
public:
    MoveCameraCommand(std::string object_name, math::Point move);
    void execute(std::shared_ptr<mediator::Mediator> mediator) override;
private:
    std::string _object_name;
     math::Point _move;
};

}

#endif // MOVE_CAMERA_COMMAND_H
