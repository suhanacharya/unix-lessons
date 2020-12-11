# access()
```
#include<unistd.h>

// function prototype
int access(const char *pathname, int flag);
```

## Flag values

|Bit Flag | Uses |
|---|---|
|F_OK| Checks whether a named file exists|
|R_OK| Test for read permission |
|W_OK| Test for write permission |
|X_OK| Test for execute permission |


## Types of files

|Macro | Type of file|
|---|---|
|S_ISREG()| Regular File|
|S_ISDIR()| Directory File|
|S_ISCHR()| Character Special File|
|S_ISFIFO()| Pipe or FIFO File|
|S_ISLNK()| Symbolic Link|
|S_ISBLK()| Block Special File|
|S_ISSOCK()| Socket |

