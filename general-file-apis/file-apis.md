## Files
1. int open(const char *pathname, int accessmode, mode_t permission) <br>
2. int creat(const char *pathname, mode_t mode) <br>
3. size_t read(int fdesc, void *buf, size_t nbyte) <br>
4. ssize_t write(int fdesc, const void *buf, size_t size) <br>
5. int close(int fdesc) <br>
6. int fcntl(int fdesc, int cmd, ...) <br>
7. off_t lseek(int fdesc, off_t pos, int whence) <br>
8. int link(const char *cur_link, const char *new_link) <br>
9. int unlink(const char *cur_link) <br>
10. int chown(const char *path_name, uid_t, gid_t) <br>
11. int fchown(int fdesc, uid_t uid) <br>
12. int lchown(const char *path_name, uid_t uid, gid_t gid) <br>
13. int chmod(const char *pathname, mode_t flag) <br>
14. int fchmod(int fdesc, mode_t flag) <br>
15. int stat(const char *pathname, struct stat *statv) <br>
16. int fstat(const int fdesc, struct stat *statv) <br>


17. int access(const char *path_name, int flag) <br>
18. int utime(const char *path_name, struct utimbuf *times) <br>
## Directory
19. int mkdir(const *path_name, mode_t mode) <br>
20. DIR *opendir(const char *path_name) <br>
21. Dirent *readdir(DIR *dir_fdesc) <br>
22. int closedir(DIR *dir_fdesc) <br>
23. void rewinddir(DIR *dir_fdesc) <br>
24. int rmdir(const char *path_name) <br>

## Device
25. int mknod(const char *path_name, mode_t mode, int device_id) <br>

## FIFO
26. int mkfifo(const char *path_name, mode_t mode) <br>

## Symlinks
27. int symlink(char *org_link, const char *sym_link) <br>
28. int readlink(char *org_link, char *buf, int size) <br>
29. int lstat(const char *path_name, struct stat *statv) <br>

30. int pipe(int fdesc) <br>

## Process control
31. pid_t getpid(void)<br>
32. pid_t getppid(void)<br>
33. uid_t getuid(void)<br>
34. uid_t geteuid(void)<br>
35. gid_t getgid(void)<br>
36. gid_t getegid(void)<br>

37. pid_t fork(void)<br>
38. pid_t vfork(void)<br>

39. void exit(int status)<br>
40. void _exit(int status)<br>
41. void _EXIT(int status)<br>

42. pid_t wait(int *statloc)<br>
43. pid_t waitpid(pid_t pid, int *statloc, int options)<br>
44. pid_t wait3(int *statloc, int options, struct rusage *rusage)<br>
45. pid_t wait4(pid_t pid, int *statloc, int options, struct rusage *rusage)<br>

46. int execl(const char* pathname, const char* arg0 ....)<br>
47. int execv(const char* pathname, const char* argv[])<br>
48. int execle(const char* pathname, const char* arg0 ...., char *const envp[])<br>
49. int execve(const char* pathname, const char* argv[], char *const envp[])<br>
50. int execlp(const char* filename, const char* arg0 ....)<br>
51. execvp(const char* filename, const char* arg[])<br>