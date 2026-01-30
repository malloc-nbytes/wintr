#ifndef BUFFER_H_INUCLUDED
#define BUFFER_H_INUCLUDED

#include "line.h"

#include <stddef.h>

typedef struct {
        line_array lns;
        size_t cx;
        size_t cy;
        line **al;
} buffer;

#endif // BUFFER_H_INUCLUDED
