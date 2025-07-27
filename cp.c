#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>
#define count 100

int main(int argc, char *argv[]) {
    if(argc == 1)
        return 1;
        
    int fd1 = open(argv[1], O_RDONLY);
    if(fd1 < 0)
        return 2;
    int fd2 = creat(argv[2], 0664);
    
    int num_read;
    char buf[count];
    while((num_read = read(fd1, buf, count)) > 0)
        write(fd2, buf, num_read);
    
    close(fd1);
    close(fd2);
    return 0;
}
