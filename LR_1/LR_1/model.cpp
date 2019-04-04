#include "model.h"

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
    if (frame_model.dots_count == 0) return ERR_EMPTY;
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

int readModelSize(int &dots_count, int &edges_count, STREAM *stream)
{
    int rc = OK;
    if (fscanf(stream, "%d %d", &dots_count, &edges_count) != 2)
        rc = ERR_IO;
    return rc;
}

int fillModel(Model &frame_model, STREAM *stream)
{
    int rc = readDots(frame_model.dots_array, stream, frame_model.dots_count);
    if (rc == OK)
    {
        rc = readEdges(frame_model.edges_array, stream, frame_model.edges_count);
        if (rc == OK)
            rc = checkEdges(frame_model.edges_array, frame_model.edges_count, frame_model.dots_count);
    }
    return rc;
}

int readCopyModel(Model &frame_model, STREAM *stream)
{
    int rc = readModelSize(frame_model.dots_count, frame_model.edges_count, stream);
    if (rc == OK)
    {
        rc = allocateModelArrays(frame_model);
        if (rc == OK)
        {
            rc = fillModel(frame_model, stream);
            if (rc != OK)
                clearModel(frame_model);
        }
    }
    return rc;
}

int readModel(Model &frame_model, const char *stream_name)
{
    int rc = OK;
    STREAM *stream = nullptr;
    rc = openStream(&stream, stream_name, "r");
    if (rc == OK)
    {
        Model tmp_model = initModel();
        rc = readCopyModel(tmp_model, stream);
        if (rc == OK)
        {
            clearModel(frame_model);
            frame_model = tmp_model;
        }
        closeStream(&stream);
    }
    return rc;
}

void saveModelSize(STREAM *stream, const int &dots_count, const int &edges_count)
{
    fprintf(stream, "%d %d\n", dots_count, edges_count);
}

int saveModel(Model &frame_model, const char *stream_name)
{
    STREAM *stream = nullptr;
    int rc = OK;
    rc = openStream(&stream, stream_name, "w");
    if (rc == OK)
    {
        saveModelSize(stream, frame_model.dots_count, frame_model.edges_count);
        saveDots(stream, frame_model.dots_array, frame_model.dots_count);
        saveEdges(stream, frame_model.edges_array, frame_model.edges_count);
        closeStream(&stream);
    }
    return rc;
}

int rotateModel(Model &frame_model, const Rotate rotate)
{
    if (frame_model.dots_count <= 0) return ERR_EMPTY;
    rotateDots(frame_model.dots_array, frame_model.dots_count, rotate);
    return OK;
}

int transferModel(Model &frame_model, const Transfer transfer)
{
    if (frame_model.dots_count <= 0) return ERR_EMPTY;
    transferDots(frame_model.dots_array, frame_model.dots_count, transfer);
    return OK;
}

int scaleModel(Model &frame_model, const Scale scale)
{
    if (frame_model.dots_count <= 0) return ERR_EMPTY;
    scaleDots(frame_model.dots_array, frame_model.dots_count, scale);
    return OK;
}

int drawModel(MainScene &main_scene, Model &frame_model)
{
    if (frame_model.dots_count <= 0 || frame_model.edges_count <= 0) return ERR_EMPTY;
    clearScene(main_scene);
    drawDots(main_scene, frame_model.dots_array, frame_model.dots_count);
    drawEdges(main_scene, frame_model.edges_array, frame_model.dots_array, frame_model.edges_count);
    return OK;
}
