#ifndef MOVE_COMMAND_H
#define MOVE_COMMAND_H

#include "basecommand.h"
#include "../math/point.h"


namespace commands
{

class TransformModelCommand: public BaseCommand
{
public:
    TransformModelCommand(std::string object_name, math::Point move, math::Point scale, math::Point rotate);
    void execute(std::shared_ptr<mediator::Mediator> mediator) override;
private:
    std::string _object_name;
    math::Point _move;
    math::Point _scale;
    math::Point _rotate;
};

}

#endif // MOVE_COMMAND_H
