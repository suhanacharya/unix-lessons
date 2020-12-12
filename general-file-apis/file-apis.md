int open(const char *pathname, int accessmode, mode_t permission)
int creat(const char *pathname, mode_t mode)
size_t read(int fdesc, void *buf, size_t nbyte)
ssize_t write(int fdesc, const void *buf, size_t size)
int close(int fdesc)
int fcntl(int fdesc, int cmd, ...)
off_t lseek(int fdesc, off_t pos, int whence)
int link(const char *cur_link, const char *new_link)
int unlink(const char *cur_link)
int chown(const char *path_name, uid_t, gid_t)
int fchown(int fdesc, uid_t uid)
int lchown(const char *path_name, uid_t uid, gid_t gid)
int chmod(const char *pathname, mode_t flag)
int fchmod(int fdesc, mode_t flag)
int stat(const char *pathname, struct stat *statv)
int fstat(const int fdesc, struct stat *statv)


int access(const char *path_name, int flag)
int utime(const char *path_name, struct utimbuf *times)

## Directory
int mkdir(const *path_name, mode_t mode)
DIR *opendir(const char *path_name)
Dirent *readdir(DIR *dir_fdesc)
int closedir(DIR *dir_fdesc)
void rewinddir(DIR *dir_fdesc)
int rmdir(const char *path_name)

## Device
int mknod(const char *path_name, mode_t mode, int device_id)

## FIFO
int mkfifo(const char *path_name, mode_t mode)

## Symlinks
int symlink(char *org_link, const char *sym_link)
int readlink(char *org_link, char *buf, int size)
int lstat(const char *path_name, struct stat *statv)

int pipe(int fdesc)

## Process control
pid_t getpid(void)
pid_t getppid(void)
uid_t getuid(void)
uid_t geteuid(void)
gid_t getgid(void)
gid_t getegid(void)

pid_t fork(void)
pid_t vfork(void)

void exit(int status)
void _exit(int status)
void _EXIT(int status)

pid_t wait(int *statloc)
pid_t waitpid(pid_t pid, int *statloc, int options)
pid_t wait3(int *statloc, int options, struct rusage *rusage)
pid_t wait4(pid_t pid, int *statloc, int options, struct rusage *rusage)

int execl(const char* pathname, const char* arg0 ....)
int execv(const char* pathname, const char* argv[])
int execle(const char* pathname, const char* arg0 ...., char *const envp[])
int execve(const char* pathname, const char* argv[], char *const envp[])
int execlp(const char* filename, const char* arg0 ....)
execvp(const char* filename, const char* arg[])