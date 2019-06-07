#include "add_camera_command.h"

namespace commands
{

AddCameraCommand::AddCameraCommand(std::string name)
    : _name(name)
{}

void AddCameraCommand::execute(std::shared_ptr<mediator::Mediator> intermediary)
{
    intermediary->addCamera(_name);
}

} // namespace commands
