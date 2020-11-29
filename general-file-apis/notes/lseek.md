# lseek()

```
#include<sys/types.h>
#include<unistd.h>

// function prototype
off_t lseek(int fdesc, off_t pos, int whence);
```

## Usage
- lseek is used to change the file offset to a different value
- Allows process to perform random access of data on open file.
- whence is reference location

|whence value| Reference Location|
|---|---|
|SEEK_CUR| Current file pointer address|
|SEEK_SET| The beginning of file|
|SEEJ_END| The EOF|