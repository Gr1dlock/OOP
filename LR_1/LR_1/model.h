#ifndef MODEL_H
#define MODEL_H

#include "errors.h"

struct Model
{
    Dot *dots_array;
    Edge *edges_array;
    int dots_count;
    int edges_count;
};

Model initModel();
Dot *getDots(const Model &frame_model);
Edge *getEdges(const Model &frame_model);
void freeModel(Model &frame_model);
int allocateEdges(Edge **edges_array, const int &edges_count);
int allocateDots(Dot **dots_array, const int &dots_count);
int allocateModelArrays(Model &frame_model);
void freeEdges(Edge **edges_array);
void freeDots(Dot **dots_array);

#endif // MODEL_H
