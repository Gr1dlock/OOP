#include "io.h"

int openFile(FILE **file, const char *filename, const char *mode)
{
    int rc = OK;
    *file = fopen(filename, mode);
    if (!(*file))
        rc = ERR_FILE;
    return rc;
}


void closeFile(FILE **file)
{
    fclose(*file);
}


int readFile(Model &frame_model, const char *filename)
{
    int rc = OK;
    FILE *file = nullptr;
    rc = openFile(&file, filename, "r");
    if (rc == OK)
    {
        Model tmp_model = initModel();
        rc = readCopyModel(tmp_model, file);
        if (rc == OK)
        {
            freeModel(frame_model);
            frame_model = tmp_model;
        }
        closeFile(&file);
    }
    return rc;
}


int saveFile(Model &frame_model, const char *filename)
{
    FILE *file = nullptr;
    int rc = OK;
    rc = openFile(&file, filename, "w");
    if (rc == OK)
    {
        fprintf(file, "%d %d\n", frame_model.dots_count, frame_model.edges_count);
        printDots(file, frame_model.dots_array, frame_model.dots_count);
        printEdges(file, frame_model.edges_array, frame_model.edges_count);
        closeFile(&file);
    }
    return rc;
}
