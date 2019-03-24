#ifndef MODEL_H
#define MODEL_H

struct Dot
{
    int x;
    int y;
    int z;
};

struct Edge
{
    int first;
    int second;
};

struct Model
{
    Dot *dots_array;
    Edge *edges_array;
    int dots_count;
    int edges_count;
};

Model InitModel();
Dot *GetDots(Model &frame_model);
Edge *GetEdges(Model &frame_model);
void FreeModel(Model &frame_model);
#endif // MODEL_H
