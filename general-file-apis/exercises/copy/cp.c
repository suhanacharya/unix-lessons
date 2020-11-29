/* Emulate 'cp' UNIX Command cp f1 f2 */
#include<sys/types.h>
#include<unistd.h>
#include<fcntl.h>
int main()
{
    int fd1, fd2, nob;
    char c;
    fd1 = open("file1.txt", O_RDONLY); 
    fd2 = open("file2.txt", O_WRONLY | O_CREAT | O_TRUNC, 0777);

    while(read(fd1, &c, 1))
    {
        write(fd2, &c, 1);
    } 
    close(fd1);
    close(fd2);
    return 0;
}