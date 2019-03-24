#ifndef DRAW_H
#define DRAW_H
#include "model.h"
#include "main_scene.h"
#include "errors.h"

int DrawModel(MainScene &scene, Model &frame_model);
int ClearModel(MainScene &main_scene, Model &frame_model);

#endif // DRAW_H
