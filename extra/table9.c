#include<stdio.h>

int main()
{
    int num,sum=0;
    printf("enter a num:");
    scanf("%d",&num);//10

    //sum of N Numbers

    for (int i = 1; i <= num; i++)
    {
        sum=sum+i;
    }

    printf(" the sum till %d no. is %d \n",num,sum);
    
    return 0;
}
