/* Public domain. */

#include "byte.h"

unsigned int byte_rchr(char *s,register unsigned int n,int c)
{
  register char ch;
  register char *t;
  register char *u;

  ch = c;
  t = s;
  u = 0;
  for (;;) {
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmisleading-indentation"
    if (!n) break; if (*t == ch) u = t; ++t; --n;
    if (!n) break; if (*t == ch) u = t; ++t; --n;
    if (!n) break; if (*t == ch) u = t; ++t; --n;
    if (!n) break; if (*t == ch) u = t; ++t; --n;
#pragma GCC diagnostic pop
  }
  if (!u) u = t;
  return u - s;
}
