#ifndef _DRIVER_FRAMEBUFFER_DIRTY_H_
#define _DRIVER_FRAMEBUFFER_DIRTY_H_

#include <stdint.h>
#include <stdbool.h>

bool driver_framebuffer_is_dirty();
/* Returns true if the framebuffer contains a dirty area */

void driver_framebuffer_set_dirty_area(int16_t x0, int16_t y0, int16_t x1, int16_t y1, bool force);
/* Set the dirty area, either incremental or directly by setting the force flag */

void driver_framebuffer_get_dirty_area(int16_t* x0, int16_t* y0, int16_t* x1, int16_t* y1);
/* Get the dirty area */

#endif
