# open()
```
#include<sys/types.h>
#include<sys/fcntl.h>

// function prototype of open()
int open(const char *pathname, int accessmode, mode_t permission);
```

accessmode are specified in <fcntl.h>

|Sl. no|Flag|Action|
|---|---|---|
|1 | O_RDONLY|Read Only|
|2 | O_WRONLY|Write Only|
|3 | O_RDWR|Read and Write|
|4 | O_APPEND|Apend to EOF|
|5 | O_CREAT|Create if not exist|
|6 | O_EXCL|Generate error if O_CREAT is specified and file exists|
|7 | O_TRUNC|If file exists, overwrite|
|8 | O_NONBLOCK|Specify read/write is non-blocking|
|9 | O_NOCITY|Specify not to use terminal device as Process control terminal|

## Example

`int fd = open("/usr/syed/usp", O_RDWR | O_APPEND, 0);`

The third argument is used when new file is created.<br>
![Screenshot 2020-11-29 153117](https://user-images.githubusercontent.com/44167922/100538826-09ed7580-3258-11eb-9948-4cfacefabde7.png)


## Error codes
Tag|Description|
|---|---|
|EACCES| Access not allowed, permission denied|
|EEXIST| Pathname already exists and O_CREAT and O_EXCL were used|
|EFAULT| Points outside accessible address space|
|ENOENT| File doesn't exists and O_CREAT not set, OR dangling symbolic link|
|ENOMEM| Insufficient kernel memory|
