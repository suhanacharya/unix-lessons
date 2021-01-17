#include<iostream>
#include<signal.h>
#include<unistd.h>
using namespace std;
void catch_sig(int sig_num)
{
    signal(sig_num, catch_sig);
    cout << "catch_sig: " << sig_num << endl;
}

int main()
{
    signal(SIGTERM, catch_sig);
    signal(SIGINT, SIG_IGN);
    signal(SIGSEGV, SIG_DFL);
    pause();
    cin.get();
}