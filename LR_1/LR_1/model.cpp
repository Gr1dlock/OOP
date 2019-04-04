#include "model.h"
#include <QtDebug>

Model initModel()
{
    Model frame_model;
    frame_model.dots_array = nullptr;
    frame_model.edges_array = nullptr;
    frame_model.dots_count = 0;
    frame_model.edges_count = 0;
    return frame_model;
}

int clearModel(Model &frame_model)
{
    if (frame_model.dots_array == 0) return ERR_EMPTY;
    freeDots(&(frame_model.dots_array));
    freeEdges(&(frame_model.edges_array));
    frame_model.dots_count = 0;
    frame_model.edges_count = 0;
    return OK;
}

int allocateModelArrays(Model &frame_model)
{
    int rc = allocateDots(&(frame_model.dots_array), frame_model.dots_count);
    if (rc == OK)
    {
        rc = allocateEdges(&(frame_model.edges_array), frame_model.edges_count);
        if (rc != OK)
            freeDots(&(frame_model.dots_array));
    }
    return rc;
}


int readCopyModel(Model &frame_model, FILE *file)
{
    int rc = OK;
    if (fscanf(file, "%d %d", &(frame_model.dots_count), &(frame_model.edges_count)) == 2)
    {
        rc = allocateModelArrays(frame_model);
        if (rc == OK)
        {
            rc = fillModel(frame_model,file);
            if (rc != OK)
                freeModel(frame_model);
        }
    }
    return rc;
}

int fillModel(Model &frame_model, FILE *file)
{
    int rc = readDots(frame_model.dots_array, file, frame_model.dots_count);
    if (rc == OK)
    {
        rc = readEdges(frame_model.edges_array, file, frame_model.edges_count);
        if (rc == OK)
            rc = checkEdges(frame_model.edges_array, frame_model.edges_count, frame_model.dots_count);
    }
    return rc;
}

int rotateModel(Model &frame_model, const Rotate rotate)
{
    if (frame_model.dots_count <= 0) return ERR_EMPTY;

    int rc = OK;
    {
        Dot *dots_array = getDots(frame_model);
        for (int i = 0; i < frame_model.dots_count && rc == OK; i++)
            rotateDot(dots_array[i], rotate);
    }
    else
        rc = ERR_EMPTY;
    return rc;
}

int transferModel(Model &frame_model, const Transfer transfer)
{
    Dot *dots_array = nullptr;
    int rc = OK;
    if (frame_model.dots_count > 0)
    {
        dots_array = getDots(frame_model);
        for (int i = 0; i < frame_model.dots_count; i++)
            transferDot(dots_array[i], transfer);
    }
    else
        rc = ERR_EMPTY;
    return rc;
}

int scaleModel(Model &frame_model, const Scale scale)
{
    Dot *dots_array = nullptr;
    int rc = OK;
    if (frame_model.dots_count > 0)
    {
        dots_array = getDots(frame_model);
        for (int i = 0; i < frame_model.dots_count; i++)
            scaleDot(dots_array[i], scale);
    }
    else
        rc = ERR_EMPTY;
    return rc;
}

int drawModel(MainScene &main_scene, Model &frame_model)
{
    int rc = OK;
    int first, second;
    Dot *dots_array = getDots(frame_model);
    Edge *edges_array = getEdges(frame_model);
    if (frame_model.dots_count > 0 && frame_model.edges_count > 0)
    {
        for (int i = 0; i < frame_model.dots_count; i++)
            drawDot(main_scene, dots_array[i]);
        for (int i = 0; i < frame_model.edges_count; i++)
        {
            first = edges_array[i].first;
            second = edges_array[i].second;
            drawEdge(main_scene, dots_array[first], dots_array[second]);
        }
    }
    else
        rc = ERR_EMPTY;
    return rc;
}
