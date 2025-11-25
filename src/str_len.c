/* Public domain. */

#include "str.h"

unsigned int str_len(const char *s)
{
  register const char *t;

  t = s;
  for (;;) {
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmisleading-indentation"
    if (!*t) return t - s; ++t;
    if (!*t) return t - s; ++t;
    if (!*t) return t - s; ++t;
    if (!*t) return t - s; ++t;
#pragma GCC diagnostic pop
  }
}
