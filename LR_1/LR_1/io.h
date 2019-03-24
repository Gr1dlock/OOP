#ifndef IO_H
#define IO_H
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "model.h"
#include "errors.h"


int ReadFile(const char *filename, Model &frame_model);
int SaveFile(const char *filename, Model &frame_model);

#endif // IO_H
