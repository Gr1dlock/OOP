#include "draw_command.h"

namespace commands {

DrawCommand::DrawCommand(std::shared_ptr<draw::BaseDrawer> drawer):
    _drawer(drawer) {}

void DrawCommand::execute(std::shared_ptr<mediator::Mediator> intermediary) {
    intermediary->draw(_drawer);
}

}
