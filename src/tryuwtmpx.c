#include <stdio.h>
#include <sys/types.h>
#include <utmpx.h>

struct futmpx ut;

int main(void) {
  char *s =ut.ut_name;
  printf("%p\n", s);
  return(0);
}
