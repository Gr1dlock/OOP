#include "io.h"

int read_file(const char *filename, model *frame_model)
{
    int dots_count, edges_count;
    char tmp;
    int rc = OK;
    dot *dots_array = nullptr;
    edge *edges_array = nullptr;
    FILE *file = nullptr;
    if (frame_model && filename)
    {
        file = fopen(filename, "r");
        if (file)
        {
            if (fscanf(file, "%d %d", &dots_count, &edges_count) == 2)
            {
                if (dots_count > 0 && edges_count > 0)
                {
                    dots_array =  new dot[dots_count];
                    if (dots_array)
                    {
                        edges_array = new edge[edges_count];
                        if (edges_array)
                        {
                            for (int i = 0; i < dots_count; i++)
                            {
                                if (fscanf(file, "%d %d %d", &(dots_array[i].x),
                                           &(dots_array[i].y),
                                           &(dots_array[i].z)) != 3)
                                    rc = ERR_IO;
                            }
                            if (rc == OK)
                            {
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
                            }
                            if (rc == OK)
                            {
                                if (!feof(file))
                                {
                                    fscanf(file, "%c", &tmp);
                                    if (tmp == '\n')
                                    {
                                        if (fscanf(file, "%c", &tmp) == 1)
                                            rc = ERR_IO;
                                    }
                                    else
                                        rc = ERR_IO;
                                }
                                if (rc == OK)
                                {
                                    frame_model->dots_array = dots_array;
                                    frame_model->edges_array = edges_array;
                                    frame_model->edges_count = edges_count;
                                    frame_model->dots_count = dots_count;
                                }
                            }
                            if (rc == ERR_IO)
                            {
                                delete [] dots_array;
                                delete [] edges_array;
                            }
                        }
                        else
                        {
                            rc = ERR_MEM;
                            delete [] dots_array;
                        }
                    }
                    else
                        rc = ERR_MEM;
                }
                else
                    rc = ERR_IO;
            }
            else
                rc = ERR_IO;
            fclose(file);
        }
        else
            rc = ERR_FILE;
    }
    else
        rc = ERR_PARAM;
    return rc;
}


int save_file(const char *filename, model *frame_model)
{
    FILE *file = nullptr;
    int rc = OK;
    if (filename && frame_model)
    {
        file = fopen(filename, "w");
        if (file)
        {
            fprintf(file, "%d %d\n", frame_model->dots_count, frame_model->edges_count);
            for (int i = 0; i < frame_model->dots_count; i++)
                fprintf(file, "%d %d %d\n", frame_model->dots_array[i].x,
                        frame_model->dots_array[i].y,
                        frame_model->dots_array[i].z);
            for (int i = 0; i < frame_model->edges_count; i++)
                fprintf(file, "%d %d\n", frame_model->edges_array[i].first,
                        frame_model->edges_array[i].second);
            fclose(file);
        }
        else
            rc = ERR_FILE;
    }
    else
        rc = ERR_PARAM;
    return rc;
}
