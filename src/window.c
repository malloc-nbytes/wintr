#include "window.h"

window
window_create(size_t w, size_t h)
{
        return (window) {
                .ab = NULL,
                .w = w,
                .h = h,
        };
}
