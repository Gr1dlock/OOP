#ifndef ROLL_CAMERA_COMMAND_H
#define ROLL_CAMERA_COMMAND_H

#include "basecommand.h"
#include "math/point.h"


namespace commands
{

class RollCameraCommand: public BaseCommand
{
public:
    RollCameraCommand(std::string object_name, double angle);
    void execute(std::shared_ptr<mediator::Mediator> mediator) override;
private:
    std::string _object_name;
    math::Point _rotation;
};

}

#endif // ROLL_CAMERA_COMMAND_H
