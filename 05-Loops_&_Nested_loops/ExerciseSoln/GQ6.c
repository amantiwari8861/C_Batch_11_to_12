#include<stdio.h>
int main()
{
    int num,rem,evenSum=0;
    printf("enter the number:");
    scanf("%d",&num);

    while (num>0)
    {
        rem=num%10;
        if (rem%2==0)
        {
            evenSum=evenSum+rem;
        }
        num=num/10;
    }
    printf("the sum of all even digits :%d \n",evenSum);
    return 0;
}
