#ifndef MODEL_H
#define MODEL_H

#include "edge.h"

struct Model
{
    Dot *dots_array;
    Edge *edges_array;
    int dots_count;
    int edges_count;
};

Model initModel();
int clearModel(Model &frame_model);
int readModel(Model &frame_model, const char *stream_name);
int saveModel(Model &frame_model, const char *stream_name);
int rotateModel(Model &frame_model, const Rotate rotate);
int transferModel(Model &frame_model, const Transfer transfer);
int scaleModel(Model &frame_model, const Scale scale);
int drawModel(MainScene &main_scene, Model &frame_model);

#endif // MODEL_H
