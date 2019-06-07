#ifndef PITCH_CAMERA_COMMAND_H
#define PITCH_CAMERA_COMMAND_H

#include "basecommand.h"
#include "math/point.h"

namespace commands
{

class PitchCameraCommand: public BaseCommand
{
public:
    PitchCameraCommand(std::string object_name, double angle);
    void execute(std::shared_ptr<mediator::Mediator> mediator) override;
private:
    std::string _object_name;
    math::Point _rotation;
};

}

#endif // PITCH_CAMERA_COMMAND_H
