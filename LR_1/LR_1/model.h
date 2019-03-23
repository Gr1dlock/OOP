#ifndef DOT_H
#define DOT_H

struct dot
{
    int x;
    int y;
    int z;
};

struct edge
{
    int first;
    int second;
};

struct model
{
    dot *dots_array = nullptr;
    edge *edges_array = nullptr;
    int dots_count = 0;
    int edges_count = 0;
};

#endif // DOT_H
