#include<stdio.h>

int main()
{
    int i,num,sum=0;
    for ( i = 1; i <= 8; i++)
    {
        printf("enter %dth value :",i);
        scanf("%d",&num);

        sum=sum+num;
    }
    
    printf("the sum is %d \n",sum);

    return 0;
}
