## Files
1. int open(const char *pathname, int accessmode, mode_t permission)
2. int creat(const char *pathname, mode_t mode)
3. size_t read(int fdesc, void *buf, size_t nbyte)
4. ssize_t write(int fdesc, const void *buf, size_t size)
5. int close(int fdesc)
6. int fcntl(int fdesc, int cmd, ...)
7. off_t lseek(int fdesc, off_t pos, int whence)
8. int link(const char *cur_link, const char *new_link)
9. int unlink(const char *cur_link)
10. int chown(const char *path_name, uid_t, gid_t)
11. int fchown(int fdesc, uid_t uid)
12. int lchown(const char *path_name, uid_t uid, gid_t gid)
13. int chmod(const char *pathname, mode_t flag)
14. int fchmod(int fdesc, mode_t flag)
15. int stat(const char *pathname, struct stat *statv)
16. int fstat(const int fdesc, struct stat *statv)


17. int access(const char *path_name, int flag)
18. int utime(const char *path_name, struct utimbuf *times)
## Directory
19. int mkdir(const *path_name, mode_t mode)
20. DIR *opendir(const char *path_name)
21. Dirent *readdir(DIR *dir_fdesc)
22. int closedir(DIR *dir_fdesc)
23. void rewinddir(DIR *dir_fdesc)
24. int rmdir(const char *path_name)

## Device
25. int mknod(const char *path_name, mode_t mode, int device_id)

## FIFO
26. int mkfifo(const char *path_name, mode_t mode)

## Symlinks
27. int symlink(char *org_link, const char *sym_link)
28. int readlink(char *org_link, char *buf, int size)
29. int lstat(const char *path_name, struct stat *statv)

30. int pipe(int fdesc)

## Process control
31. pid_t getpid(void)
32. pid_t getppid(void)
33. uid_t getuid(void)
34. uid_t geteuid(void)
35. gid_t getgid(void)
36. gid_t getegid(void)

37. pid_t fork(void)
38. pid_t vfork(void)

39. void exit(int status)
40. void _exit(int status)
41. void _EXIT(int status)

42. pid_t wait(int *statloc)
43. pid_t waitpid(pid_t pid, int *statloc, int options)
44. pid_t wait3(int *statloc, int options, struct rusage *rusage)
45. pid_t wait4(pid_t pid, int *statloc, int options, struct rusage *rusage)

46. int execl(const char* pathname, const char* arg0 ....)
47. int execv(const char* pathname, const char* argv[])
48. int execle(const char* pathname, const char* arg0 ...., char *const envp[])
49. int execve(const char* pathname, const char* argv[], char *const envp[])
50. int execlp(const char* filename, const char* arg0 ....)
51. execvp(const char* filename, const char* arg[])