#ifndef STR_H_INCLUDED
#define STR_H_INCLUDED

#include <stddef.h>

typedef struct {
        char *chars;
        size_t len;
        size_t cap;
} str;

str str_create(void);
str str_from(const char *chars);
const char *str_cstr(const str *s);
void str_append(str *s, char c);
void str_concat(str *s, const char *chars);

#endif // STR_H_INCLUDED
