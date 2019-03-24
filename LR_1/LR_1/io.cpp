#include "io.h"


int ReadDots(FILE *file, Dot *dots_array, const int& dots_count)
{
    int rc = OK;
    for (int i = 0; i < dots_count; i++)
    {
        if (fscanf(file, "%d %d %d", &(dots_array[i].x),
                   &(dots_array[i].y),
                   &(dots_array[i].z)) != 3)
            rc = ERR_IO;
    }
    return rc;
}


int ReadEdges(FILE *file, Edge *edges_array, const int& edges_count, const int& dots_count)
{
    int rc = OK;
    for (int i = 0; i < edges_count; i++)
    {
        if (fscanf(file, "%d %d", &(edges_array[i].first),
                   &(edges_array[i].second)) != 2)
            rc = ERR_IO;
        else
        {
            if (edges_array[i].first > dots_count - 1 ||
                    edges_array[i].first < 0 ||
                    edges_array[i].second > dots_count - 1 ||
                    edges_array[i].second < 0 ||
                    edges_array[i].first == edges_array[i].second)
                rc = ERR_IO;
        }
    }
    return rc;
}


int CheckEndFile(FILE *file)
{
    char tmp;
    int rc = OK;
    fscanf(file, "%c", &tmp);
    if (tmp == '\n')
    {
        if (fscanf(file, "%c", &tmp) == 1)
            rc = ERR_IO;
    }
    else
        rc = ERR_IO;
    return rc;
}


int AllocateArrays(Dot **dots_array, Edge **edges_array, const int& dots_count, const int &edges_count)
{
    int rc = OK;
    if (dots_count > 0 && edges_count > 0)
    {
        *dots_array =  new Dot[dots_count];
        if (*dots_array)
        {
            *edges_array = new Edge[edges_count];
            if (!(*edges_array))
            {
                rc = ERR_MEM;
                delete [] *dots_array;
            }
        }
        else
            rc = ERR_MEM;
    }
    else
        rc = ERR_IO;
    return rc;
}


int ReadFile(const char *filename, Model &frame_model)
{
    int dots_count, edges_count;
    int rc = OK;
    Dot *dots_array = nullptr;
    Edge *edges_array = nullptr;
    FILE *file = nullptr;
    file = fopen(filename, "r");
    if (file)
    {
        if (fscanf(file, "%d %d", &dots_count, &edges_count) == 2)
        {
            rc = AllocateArrays(&dots_array, &edges_array, dots_count, edges_count);
            if (rc == OK)
            {
                rc = ReadDots(file, dots_array, dots_count);
                if (rc == OK)
                {
                    rc = ReadEdges(file, edges_array, edges_count, dots_count);
                    if (rc == OK)
                    {
                        if (!feof(file))
                        {
                            rc = CheckEndFile(file);
                        }
                        if (rc == OK)
                        {
                            frame_model.dots_array = dots_array;
                            frame_model.edges_array = edges_array;
                            frame_model.edges_count = edges_count;
                            frame_model.dots_count = dots_count;
                        }
                        else if (rc == ERR_IO)
                        {
                            delete [] dots_array;
                            delete [] edges_array;
                        }
                    }
                }
            }
        }
        else
            rc = ERR_IO;
        fclose(file);
    }
    else
        rc = ERR_FILE;
    return rc;
}


int SaveFile(const char *filename, Model &frame_model)
{
    FILE *file = nullptr;
    int rc = OK;
    Dot *dots_array = GetDots(frame_model);
    Edge *edges_array = GetEdges(frame_model);
    file = fopen(filename, "w");
    if (file)
    {
        fprintf(file, "%d %d\n", frame_model.dots_count, frame_model.edges_count);
        for (int i = 0; i < frame_model.dots_count; i++)
            fprintf(file, "%d %d %d\n", dots_array[i].x,
                    dots_array[i].y,
                    dots_array[i].z);
        for (int i = 0; i < frame_model.edges_count; i++)
            fprintf(file, "%d %d\n", edges_array[i].first,
                    edges_array[i].second);
        fclose(file);
    }
    else
        rc = ERR_FILE;
    return rc;
}
