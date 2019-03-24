#include "model.h"
#include <QtDebug>

Model InitModel()
{
    Model frame_model;
    frame_model.dots_array = nullptr;
    frame_model.edges_array = nullptr;
    frame_model.dots_count = 0;
    frame_model.edges_count = 0;
    return frame_model;
}


Dot *GetDots(Model &frame_model)
{
    return frame_model.dots_array;
}


Edge *GetEdges(Model &frame_model)
{
    return frame_model.edges_array;
}

void FreeModel(Model &frame_model)
{
    delete [] (GetDots(frame_model));
    delete [] (GetEdges(frame_model));
    frame_model.dots_array = nullptr;
    frame_model.edges_array = nullptr;
    frame_model.dots_count = 0;
    frame_model.edges_count = 0;
}
