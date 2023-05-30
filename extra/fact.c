#include<stdio.h>
int main()
{
    int num,i,factorial=1;
    printf("enter the number:");
    scanf("%d",&num);//7

    for(i=num;i>0;i--)
    {
        factorial=factorial*i;
    }

    printf("the factorial of %d is %d \n",num,factorial);



    return 0;
}
