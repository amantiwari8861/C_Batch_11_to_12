#include<stdio.h>

void add(int num)
{
    printf("in add function at %d \n",num);
    add(num-1);
}

int main()
{
    int num=10;
    add(num);
    
    return 0;
}
