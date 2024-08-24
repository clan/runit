#include <stdio.h>
#include <sys/types.h>
#include <utmp.h>

struct utmp ut;

int main(void) {
  char *s =ut.ut_name;
  printf("%p\n", s);
  return(0);
}
