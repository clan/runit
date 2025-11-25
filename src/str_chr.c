/* Public domain. */

#include "str.h"

unsigned int str_chr(register const char *s,int c)
{
  register char ch;
  register const char *t;

  ch = c;
  t = s;
  for (;;) {
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmisleading-indentation"
    if (!*t) break; if (*t == ch) break; ++t;
    if (!*t) break; if (*t == ch) break; ++t;
    if (!*t) break; if (*t == ch) break; ++t;
    if (!*t) break; if (*t == ch) break; ++t;
#pragma GCC diagnostic pop
  }
  return t - s;
}
