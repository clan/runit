/* Public domain. */

#include <signal.h>
#include "sig.h"
#include "hassgprm.h"

void sig_pause(void)
{
#ifdef HASSIGPROCMASK
  sigset_t ss;
  sigemptyset(&ss);
  sigsuspend(&ss);
#else
  int sigpause(int);
  sigpause(0);
#endif
}
