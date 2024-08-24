/* Public domain. */

#ifndef BYTE_H
#define BYTE_H

extern unsigned int byte_chr(char *s, unsigned int n, int c);
extern unsigned int byte_rchr(char *s, unsigned int n, int c);
extern void byte_copy(char *to, unsigned int n, char *from);
extern void byte_copyr(char *to, unsigned int n, char *from);
extern int byte_diff(char *s, unsigned int n, char *t);
extern void byte_zero();

#define byte_equal(s,n,t) (!byte_diff((s),(n),(t)))

#endif
