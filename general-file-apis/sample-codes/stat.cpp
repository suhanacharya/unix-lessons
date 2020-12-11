#include<sys/stat.h>
#include<unistd.h>

// function prototype
int stat(const char *pathname, struct stat *statv);

// function prototype
int fstat(const int fdesc, struct stat *statv);

// function prototype
int lstat(const char *pathname, struct stat *statv);