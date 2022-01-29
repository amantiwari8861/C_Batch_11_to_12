#include <stdio.h>
int main()
{
    char ch[] = {"this data will be printed on console \n"};

    fputs(ch, stdout);
    //working just like printf
    fputs(ch, stderr);
    return 0;
}