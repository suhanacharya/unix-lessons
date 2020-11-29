# link()
```
#include<unistd.h>

// function prototype
int link(const char *cur_link, const char *new_link);
```

## Usage
- Creates a new link for the existing file (Two files that point to the same data, changes in one file reflect in the other)
- Increases the hardlink count of a file