/* Public domain. */

#include "byte.h"

void byte_copyr(register char *to,register unsigned int n,register char *from)
{
  to += n;
  from += n;
  for (;;) {
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmisleading-indentation"
    if (!n) return; *--to = *--from; --n;
    if (!n) return; *--to = *--from; --n;
    if (!n) return; *--to = *--from; --n;
    if (!n) return; *--to = *--from; --n;
#pragma GCC diagnostic pop
  }
}
