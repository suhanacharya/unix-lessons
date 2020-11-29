# creat()
```
#include<sys/types.h>
#include<unistd.h>

// function prototype
int creat(const char *pathname, mode_t mode)
```

- Creates new regular files
- Implemented when using open() with O_CREAT