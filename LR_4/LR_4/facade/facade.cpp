#include "facade.h"

namespace facade {

Facade::Facade()
    :_mediator(new mediator::Mediator)
{}

void Facade::executeCommand(commands::BaseCommand *command) {
    if (!command) {
        return;
    }
    command->execute(_mediator);
}

}
