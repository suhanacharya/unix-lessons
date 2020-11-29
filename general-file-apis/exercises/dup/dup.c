/* dup and dup2 functions in UNIX */
#include<fcntl.h>
#define dup(fdesc) fcntl(fdesc, F_DUPFD, 0)
#define dup2(fdesc1, fd2) close(fd2), fcntl(fdesc1, F_DUPFD, fd2)
