#include<stdio.h>
int main()
{
    int num,fact=1;
    printf("enter the number to be factorial :");
    scanf("%d",&num);//5

    // 5 * 4 * 3 * 2 * 1 = 120 ans.
    for (int i=num;i>0;i--)
    {
        fact=fact*i;
    }
    printf("the factorial of %d is %d \n",num,fact);

    return 0;
}

