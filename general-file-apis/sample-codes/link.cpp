/* Emulate ln UNIX Command */
#include<unistd.h>
#include<iostream>
#include<stdio.h>
using namespace std;
// function prototype
// int link(const char *cur_link, const char *new_link);

int main(int argc, char** argv)
{
    if(argc != 3)
    {
        cerr << "usage: " << argv[0] << " <src_file> <dest_file>\n";
        return 0;
    }
    if(link(argv[1], argv[2]) == -1)
    {
        perror("link");
        return 1;
    }

    return 0;
}