#include "stream.h"

int openStream(STREAM **stream, const char *stream_name, const char *mode)
{
    int rc = OK;
    *stream = fopen(stream_name, mode);
    if (!(*stream))
        rc = ERR_FILE;
    return rc;
}


void closeStream(STREAM **stream)
{
    fclose(*stream);
}
