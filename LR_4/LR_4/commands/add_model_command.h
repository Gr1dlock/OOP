#ifndef ADD_MODEL_COMMAND_H
#define ADD_MODEL_COMMAND_H

#include <string>
#include "basecommand.h"

namespace commands
{

class AddModelCommand: public BaseCommand
{
public:
    explicit AddModelCommand(std::string file_name, std::string model_name);
    void execute(std::shared_ptr<mediator::Mediator> mediator) override;
private:
    std::string _file_name;
    std::string _model_name;
};

}

#endif // ADD_MODEL_COMMAND_H
