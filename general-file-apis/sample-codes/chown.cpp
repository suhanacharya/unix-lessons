#include<unistd.h>
#include<sys/types.h>
#include<sys/stat.h>
#include<pwd.h>
#include<iostream>

using namespace std;

// int chown(const char *path_name, uid_t uid, gid_t gid);
// int fchown(int fdesc, uid_t uid, gid_t gid);
// int lchown(const char *path_name, uid_t uid, gid_t gid);

int main(int argc, char *argv[])
{
    if(argc > 3)
    {
        cerr << "usage: " << argv[0] << " <usr_name> <file>\n";
        return 1;
    }

    struct passwd * pwd = getpwuid(argv[1]);

    uid_t UID = pwd ? pwd -> pw_uid: -1;

    struct stat statv;

    if(UID == (uid_t)-1){
        cerr << "Invalid user name";
    }
    else{
        for(int i = 2; i < argc; i++)
        {
            if(stat(argv[i], &statv) == 0)
            {
                if(chown(argv[i], UID, statv.st_gid))
                {
                    perror("chown");
                }
            }
        }
    }
    return 0;
}