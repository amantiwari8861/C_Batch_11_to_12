#include<stdio.h>
int fibonnaci(int num)
{
    if(num==0)
    {
        return 0;
    }
    else if (num==1)
    {
        return 1;
    }
    else
    {
        return fibonnaci(num-2)+fibonnaci(num-1);
    }  
}
int main()
{
    for (int i = 0; i < 10; i++)
    {
        printf(" %d ",fibonnaci(i));
    }
    return 0;
}
// https://www.baeldung.com/cs/recursion-looping