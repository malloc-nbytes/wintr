#ifndef WINDOW_H_INCLUDED
#define WINDOW_H_INCLUDED

#include "buffer.h"

#include <stddef.h>

typedef struct {
        buffer *ab;
        size_t  w;
        size_t  h;
} window;

window window_create(size_t w, size_t h);

#endif // WINDOW_H_INCLUDED
