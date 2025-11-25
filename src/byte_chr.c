/* Public domain. */

#include "byte.h"

unsigned int byte_chr(char *s, register unsigned int n, int c)
{
  register char ch;
  register char *t;

  ch = c;
  t = s;
  for (;;) {
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmisleading-indentation"
    if (!n) break; if (*t == ch) break; ++t; --n;
    if (!n) break; if (*t == ch) break; ++t; --n;
    if (!n) break; if (*t == ch) break; ++t; --n;
    if (!n) break; if (*t == ch) break; ++t; --n;
#pragma GCC diagnostic pop
  }
  return t - s;
}
