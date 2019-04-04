#ifndef CONTROLLER_H
#define CONTROLLER_H
#include "model.h"

enum ActionType { TRANSFER, ROTATE, SCALE, SAVE, OPEN, DRAW, CLEAR };

union CurAction
{
    Rotate rotate;
    Scale scale;
    Transfer transfer;
    const char *stream_name;
    bool clear;
};

int control(MainScene &main_scene, const CurAction& act, const ActionType type);

#endif // CONTROLLER_H
