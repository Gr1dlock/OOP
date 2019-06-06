#include "yaw_camera_command.h"

namespace commands {

YawCameraCommand::YawCameraCommand(std::string object_name, double angle):
    _object_name(object_name), _rotation(0, 0, angle) {}

void YawCameraCommand::execute(std::shared_ptr<mediator::Mediator> mediator) {
    math::Point moving(0, 0, 0);
    mediator->transformCamera(_object_name, moving, _rotation);
}

} // namespace commands
