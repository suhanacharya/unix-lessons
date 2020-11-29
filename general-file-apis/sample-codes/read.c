#include<sys/types.h>
#include<unistd.h>
#include<fcntl.h>

// size_t read(int fdesc, void *buf, size_t nbyte);

int main()
{
    int fd, nob;
    char c[256];
    fd = open("sample.txt", O_RDONLY);
    nob = read(fd, c, sizeof(c));
    if(nob != -1)
    {
        printf("%s\n", c);
    }
    else{
        perror("read Error");
    }
    close(fd);
    return 0;
}