#include<stdio.h>
#define WINDOWS 0
#define UNIX 1

int main()
{
    #if WINDOWS
    printf("this code will run on windows\n");
    #elif UNIX
    printf("this code will run on UNIX\n");
    #else
    printf("this code will run on other OS\n");
    #endif


    return 0;
}
