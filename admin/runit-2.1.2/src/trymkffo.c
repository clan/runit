/* Public domain. */

#include <sys/types.h>
#include <sys/stat.h>

int main()
{
  mkfifo("temp-trymkffo",0);
}
