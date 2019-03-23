#ifndef IO_H
#define IO_H
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "model.h"
#include "errors.h"


int read_file(const char *filename, model *frame_model);
int save_file(const char *filename, model *frame_model);

#endif // IO_H
