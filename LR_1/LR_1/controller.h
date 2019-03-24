#ifndef CONTROLLER_H
#define CONTROLLER_H
#include "actions.h"
#include "io.h"
#include "draw.h"

enum ActionType { TRANSFER, ROTATE, SCALE, SAVE, OPEN, DRAW, CLEAR };

union CurAction
{
    Rotate rotate;
    Scale scale;
    Transfer transfer;
    const char *filename;
    bool clear;
};

int control(MainScene &main_scene, const CurAction& act, ActionType type);

#endif // CONTROLLER_H
