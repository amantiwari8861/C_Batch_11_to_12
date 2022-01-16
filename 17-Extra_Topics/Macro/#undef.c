#include<stdio.h>
#define WINDOWS 1
#undef WINDOWS

int main()
{
    #if WINDOWS
    printf("this code will run on windows\n");
    #else
    printf("this code will run on other OS\n");
    #endif
    return 0;
}
