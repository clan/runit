/* Public domain. */

#include <stdio.h>
#include <sys/types.h>
#include <dirent.h>

void foo()
{
  DIR *dir = NULL;
  struct dirent *d = NULL;

  printf("%p/%p\n", dir, d);
}
