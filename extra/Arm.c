#include<stdio.h>
int main()
{
    int num,sum=0,original,rem;
    printf("enter 3 digit number:");
    scanf("%d",&num);
    original=num;
    while (num>0)
    {
        rem=num%10;
        sum=sum+rem*rem*rem;
        num=num/10;
    }
    if (sum==original)
    {
        printf("This is an armstrong no.\n");
    }
    else
    {
        printf("not an armstrong no. \n");
    }
    return 0;
}
