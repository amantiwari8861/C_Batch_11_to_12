#include<stdio.h>
// #define WINDOWS 1
#define WINDOWS 0

#if WINDOWS
int main()
{
    printf("this code will run on windows \n");
}
#else
    #error it will not run on windows
#endif