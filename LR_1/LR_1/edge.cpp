#include "edge.h"

void freeEdges(Edge **edges_array)
{
    delete [] *edges_array;
    *edges_array = nullptr;
}

int allocateEdges(Edge **edges_array, const int &edges_count)
{
    int rc = OK;
    if (edges_count > 0)
    {
        *edges_array =  new Edge[edges_count];
        if (!(*edges_array))
            rc = ERR_MEM;
    }
    else
        rc = ERR_IO;
    return rc;
}

void printEdges(FILE *file, Edge *edges_array, const int &edges_count)
{
    for (int i = 0; i < edges_count; i++)
        fprintf(file, "%d %d\n", edges_array[i].first,
                edges_array[i].second);
}

int readEdges(Edge *edges_array, FILE *file, const int& edges_count)
{
    int rc = OK;
    for (int i = 0; i < edges_count; i++)
    {
        if (fscanf(file, "%d %d", &(edges_array[i].first),
                   &(edges_array[i].second)) != 2)
            rc = ERR_IO;
    }
    return rc;
}

int checkEdges(Edge *edges_array, const int& edges_count, const int &dots_count)
{
    int rc = OK;
    for (int i = 0; i < edges_count; i++)
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


void drawEdge(MainScene &main_scene, const Dot &first, const Dot &second)
{
    QGraphicsScene *scene = getScene(main_scene);
    QBrush brush(Qt::white, Qt::SolidPattern);
    QPen pen(brush, 3);
    scene->addLine(main_scene.center_x + first.x, main_scene.center_y - first.y,
                   main_scene.center_x + second.x, main_scene.center_y - second.y, pen);
}
