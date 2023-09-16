#include<stdio.h>
int main()
{
    int num,sum=0,rem;
    printf("enter number:");
    scanf("%d",&num);

    //763876872
    while (num>0)
    {
        rem=num%10;
        if(rem%2==0)
        {
            sum+=rem;
        }
        num/=10;
    }
    printf("the sum of even is %d \n",sum);
    return 0;
}
