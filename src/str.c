#include "str.h"

#include <stdlib.h>

str
str_create(void)
{
        return (str) {
                .chars = NULL,
                .len = 0,
                .cap = 0,
        };
}

str
str_from(const char *chars)
{
        str s = str_create();
        str_concat(&s, chars);
        return s;
}

inline const char *
str_cstr(const str *s)
{
        return s->chars;
}

void
str_append(str *s, char c)
{
        if (s->len >= s->cap) {
                s->cap = s->cap ? s->cap*2 : 2;
                s->chars = (char *)realloc(s->chars, s->cap);
        }
        s->chars[s->len++] = c;
}

void
str_concat(str *s, const char *chars)
{
        for (size_t i = 0; chars[i]; ++i)
                str_append(s, chars[i]);
}
