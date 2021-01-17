#include<bits/stdc++.h>
int glob=6;
char buf[] = "a write to stdout\n";

int main(void){
    int var;
    pid_t pid;
    var = 88;
    if(write(STDOUT_FILENO, buf, sizeof(buf)-1 != size))
}