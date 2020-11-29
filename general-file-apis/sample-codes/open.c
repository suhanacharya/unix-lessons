#include<sys/types.h>
#include<sys/fcntl.h>
#include<stdio.h>

int main()
{
    int fd = open("sample.txt", O_WRONLY | O_APPEND | O_CREAT, S_IRWXU);
    printf("%d\n", fd);
}