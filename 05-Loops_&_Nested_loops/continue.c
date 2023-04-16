#include<stdio.h>
int main()
{
    for (int i=1;i<=10;i++)
    {
        if (i==6 )
        {
            continue;
        }
        printf("the value of i is %d  \n",i);
    }
    return 0;
}