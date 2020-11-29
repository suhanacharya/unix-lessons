# fcntl()

```
#include<fcntl.h>

// function prototype
int fcntl(int fdesc, int cmd, ...)
```

## Possible cmd values

|CMD Value| Use|
|---|---|
|F_GETFL| Returns the access control flags of a file descriptor|
|F_SETFL| Sets or clears access control flags specified in third arg to fcntl|
|F_GETFD| Returns the close-on-exec flag of file referenced by fdesc|
|F_SETFD| Sets or clears the close-on-exec flag of fdesc|
|F_DUPFD| Duplicates fdesc with another fdesc|

## Usage
- Useful for changing access control flag of fdesc

### Example
After opening a file in read-write access, if process needs to change access to non-blocking in write-append mode, it can call it as follows:
```
int cur_flags = fcntl(fdesc, F_GETFL);
int rc = fcntl(fdesc, F_SETFL, cur_flag | O_APPEND | O_NONBLOCK);
```