#include "edge.h"

void freeEdges(Edge **edges_array)
{
    delete [] *edges_array;
    *edges_array = nullptr;
}

int allocateEdges(Edge **edges_array, const int &edges_count)
{
    int rc = OK;
    if (edges_count <= 0) return ERR_IO;
    *edges_array =  new Edge[edges_count];
    if (!(*edges_array))
        rc = ERR_MEM;
    return rc;
}

void saveEdges(STREAM *stream, Edge *edges_array, const int &edges_count)
{
    for (int i = 0; i < edges_count; i++)
        fprintf(stream, "%d %d\n", edges_array[i].first,
                edges_array[i].second);
}

int readEdge(Edge &edge, STREAM *stream)
{
    int rc = OK;
    if (fscanf(stream, "%d %d", &(edge.first),
                       &(edge.second)) != 2)
        rc = ERR_IO;
    return rc;
}

int readEdges(Edge *edges_array, STREAM *stream, const int& edges_count)
{
    int rc = OK;
    for (int i = 0; i < edges_count && rc == OK; i++)
    {
        rc = readEdge(edges_array[i], stream);
    }
    return rc;
}

int checkEdges(Edge *edges_array, const int& edges_count, const int &dots_count)
{
    int rc = OK;
    for (int i = 0; i < edges_count && rc == OK; i++)
    {
        if (edges_array[i].first > dots_count - 1 ||
                edges_array[i].first < 0 ||
                edges_array[i].second > dots_count - 1 ||
                edges_array[i].second < 0 ||
                edges_array[i].first == edges_array[i].second)

            rc = ERR_IO;
    }
    return rc;
}

void drawEdges(MainScene &main_scene, Edge *edges_array, Dot *dots_array, const int &edges_count)
{
    int first, second;
    for (int i = 0; i < edges_count; i++)
    {
        first = edges_array[i].first;
        second = edges_array[i].second;
        drawLine(main_scene, dots_array[first].x, dots_array[first].y, dots_array[second].x, dots_array[second].y);
    }
}
