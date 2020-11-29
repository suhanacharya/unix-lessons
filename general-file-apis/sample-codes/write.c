#include<sys/types.h>
#include<unistd.h>
#include<fcntl.h>

// Function prototype
// ssize_t write(int fdesc, const void *buf, size_t size);

int main()
{
    int fd, nob;
    char c[] = "This is new sample text";

    fd = open("sample.txt", O_WRONLY, 0777);
    nob = write(fd, c, strlen(c));
    if(nob != -1)
    {
        printf("Successfully written to file\n");
    }
    else{
        perror("Write ERROR\n");
    }
    close(fd);
    return 0;
}