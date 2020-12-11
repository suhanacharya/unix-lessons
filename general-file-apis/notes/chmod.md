 # chmod(), fchmod()

 ```
 #include<sys/types.h>
 #include<sys/stat.h>
 #include<unistd.h>

 int chmod(const char *pathname, mode_t flag);
 int chmod(int fdesc, mode_t flag);
```
## Types of UID
- Real UID
- Effective UID
- Saved UID

