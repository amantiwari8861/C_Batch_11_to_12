#include<stdio.h>
int main()
{
    int i,sum=0;
    printf("The first 10 digits are :\n");
    for(i=1;i<=10;i++)
    {
        printf(" %d ",i);
        sum=sum+i;
    }
    printf("\n the sum of first 10 no. is %d \n",sum);

    return 0;
}