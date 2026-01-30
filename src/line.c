#include "line.h"

#include <stdlib.h>

line *
line_alloc(int no)
{
        line *l = (line *)malloc(sizeof(line));
        l->s    = str_create();
        l->no   = no;
        return l;
}

line *
line_from(int no, str s)
{
        line *l = (line *)malloc(sizeof(line));
        l->s    = s;
        l->no   = no;
        return l;
}

line *
line_from_cstr(int no, const char *s)
{
        line *l = (line *)malloc(sizeof(line));
        l->s    = str_from(s);
        l->no   = no;
        return l;
}
