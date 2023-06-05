#include<stdio.h>
int main()
{
    // 6. take a number from user and sum of the even digits in that number eg.4589 -> 12
    int  num,sum=0,rem;
    printf("enter num :");
    scanf("%d",&num);//4589

    while ( num !=0)
    {
        rem=num%10;
        if (rem %2 ==0)
        {
            sum=sum+rem;
        }
        num=num/10;
    }
    printf("the sum is :%d \n",sum);
    return 0;
}
