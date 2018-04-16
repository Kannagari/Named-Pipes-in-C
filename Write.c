//Write


#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
#include<sys/types.h>
#include<sys/stat.h>
#include<fcntl.h>

int main(void)
{

        int fd1;
        char mystring[80];
        int arr[10] = {5,7,9,2,6,3,4,1,7,9};
        int n =0;


        fd1 = open("ages", O_WRONLY);
        for(int i =0; i<10; i++)
                n+= sprintf(&mystring[n], "%d" , arr[i]);

        mystring[(sizeof(arr)/4)] = '\0';

        write(fd1, mystring, sizeof(mystring));


        close(fd1);

        exit(0);

}
