#ifndef DRAW_COMMAND_H
#define DRAW_COMMAND_H

#include "basecommand.h"


namespace commands
{

class DrawCommand: public BaseCommand
{
public:
    explicit DrawCommand(std::shared_ptr<draw::BaseDrawer> drawer);
    void execute(std::shared_ptr<mediator::Mediator> mediator) override;
private:
    std::shared_ptr<draw::BaseDrawer> _drawer;
};

}

#endif //DRAW_COMMAND_H
