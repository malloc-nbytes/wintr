#include "buffer.h"

#include <assert.h>
#include <stdlib.h>

buffer *
buffer_alloc(void)
{
        buffer *b = (buffer *)malloc(sizeof(buffer));

        b->filename = str_create();
        b->lns      = dyn_array_empty(line_array);
        b->cx       = 0;
        b->cy       = 0;
        b->al       = NULL;

        return b;
}

buffer *
buffer_from_file(str filename)
{
        assert(0);
}
