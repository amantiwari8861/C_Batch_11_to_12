#include<stdio.h>
int main()
{
    
    int res=0,i;
    for ( i = 1; i <= 10; i++)
    {
        if(i%2 == 0)
        {
            res=res+i;
        }
    }
    printf("the result is %d \n",res);

    return 0;
}