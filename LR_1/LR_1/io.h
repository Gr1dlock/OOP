#ifndef IO_H
#define IO_H
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "model.h"


int readFile(Model &frame_model, const char *filename);
int saveFile(Model &frame_model, const char *filename);

#endif // IO_H
