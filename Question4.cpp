#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>
int main()
{
    int n, fd;
    char buff[30];
    fd = open("file", O_RDONLY, 0777);

    lseek(fd, -11, SEEK_END);
    n = read(fd, buff, 10);
    write(1, buff, n);

    return 0;
}
