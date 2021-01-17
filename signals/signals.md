## signals
1. void(*signal(int sig_no, void( *handler)(int)))(int);
2. int kill(pid_t pid, int signo);
3. int raise(int signo);
4. usigned int alarm(usigned int seconds);
5. int pause(void);
6. int sigprocmask(int cmd, const sigset_t *new_mask, sigset_t *old_mask);
7. int sigaction(int signo, const struct sigaction *restrict act, struct sigaction * restrict oact);
8. int sigsetjmp(sigjmpbuf env, int save_sigmask);
9. int siglongjmp(sigjmpbuf env, int ret_val);

## timers
10. int setitimer(int which, const struct itimerval *val, struct itimerval *old);
11. int getitimer(int which, struct itimerval *old);
12. int timer_create(clockid_t clockid, struct sigevent *sevp, timer_t *timerid);
13. int timer_settime(timer_t timerid, int flags, const struct itimerspec *new_value, struct itimerspec *old_value);
14. int timer_gettime(timer_t timerid, struct itimerspec *curr_value);
15. int timer_getoverrun(timer_t timerid);
16. int timer_delete(timer_t timerid);

## id
17. int setuid(uid_t uid);
18. int setgid(gid_t gid);
19. int setreuid(uid_t ruid, uid_t euid);
20. int setregid(gid_t rgid, gid_t egid);
21. int seteuid(uid_t uid);
21. int setegid(gid_t gid);
22. int system(const char *command);
23. char *getlogin(void);

24. clock_ttimes(struct tms *buf);

## ipc
25. int msgget(key_t key, int msg_flags);
26. int msgsnd(int msquid, const void *msgp, msgsz, int msgflg);
27. ssize_t msgrcv(int msid, void *msgp, size_t msgsz, long msgtyp, int msgflg);
28. int msgctl(int msqid, int cmd, struct msquid_ds *buf);

29. int semget(key_t, int nsems, int semflg);
30. int semop(int semid, struct sembuf *sops, size_t nsops);
31. int semctl(int semid, int semnum, int cmd, ...);

32. int shmget(key_t, size_t size, int shmflg);
33. void *shmat(int shmid, const void, *shmaddr, int shmflg);
34. int shmdt(const void *shmaddr);
35. int shmctl(int shmid, int cmd, struct shmid_ds *buf);

## file
36. FILE *popen(const char *cmdstring, const char *type);
37. pclose(FILE *fp);
38. int mkfifo(const char *pathname, mode_t mode);
