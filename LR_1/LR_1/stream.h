#ifndef STREAM_H
#define STREAM_H

#include <cstdio>
#include "errors.h"

#define STREAM FILE

int openStream(STREAM **stream, const char *stream_name, const char *mode);
void closeStream(STREAM **stream);

#endif // STREAM_H
