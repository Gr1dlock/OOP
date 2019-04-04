#ifndef EDGE_H
#define EDGE_H

#include "dot.h"

struct Edge
{
    int first;
    int second;
};

void freeEdges(Edge **edges_array);
int allocateEdges(Edge **edges_array, const int &edges_count);
void saveEdges(STREAM *stream, Edge *edges_array, const int &edges_count);
int readEdges(Edge *edges_array, STREAM *stream, const int& edges_count);
int checkEdges(Edge *edges_array, const int& edges_count, const int &dots_count);
void drawEdges(MainScene &main_scene, Edge *edges_array, Dot *dots_array, const int &edges_count);

#endif // EDGE_H
