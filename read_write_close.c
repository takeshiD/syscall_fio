#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

/*
#include <unistd.h>
ssize_t read(int fd, void *buf, size_t bufsize)
ssize_t write(int fd, const void *buf, size_t bufsize)

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
int open(const char *path, int flags);
int open(const char *path, int flags, mode_t mode);

#include <unistd.h>
int close(int fd);
 */

int main(int argc, char **argv){
    int fd;
    if(argc < 2){
        perror("argment invalid");
        return 1;
    }
    fd = open(argv[1],  O_RDONLY);
    unsigned long word;
    ssize_t nr;
    nr = read(fd, &word, sizeof(unsigned long));
    if(nr == -1){
        perror("oh no");
        return 1;
    }
    return 0;
}
