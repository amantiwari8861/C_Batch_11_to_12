#include<stdio.h>

void add(int num)
{
    printf("in add function at %d \n",num);
    add(num+1);
}

int main()
{
    //Recursion is a technique in which a function calls itself.
    int num=10;
    add(num);
    
    return 0;
}
