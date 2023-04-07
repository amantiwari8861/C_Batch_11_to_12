#include<stdio.h>
int main()
{
    int num;
    printf("enter number:");
    scanf("%d",&num);

    int fact=1;

    for(int i=num;i>0;i--)
    {
        fact=fact*i;
    }
    printf("the factorial of %d is %d \n",num,fact);
    return 0;
}