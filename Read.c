//Read.c

#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
#include<sys/types.h>
#include<sys/stat.h>
#include<fcntl.h>
#include<errno.h>

void main()
{


        struct stat buffer;
        int status, sum=0, i=0;
        int size;
        size_t nbytes;
        char buf[100];
        int fd1;

        printf("Opening named pipe for reading");

        fd1 = open("ages", O_RDONLY);
        nbytes = read(fd1, buf, sizeof(buf));

        printf("read %d bytes. buf == %s\n", nbytes,  buf);


        while(buf[i] != '\0')
        {
                sum += buf[i] - '0';
                ++i;

        }

        printf("The sum of the integers is: %d\n", sum);

        close(fd1);

        exit(0);

}
