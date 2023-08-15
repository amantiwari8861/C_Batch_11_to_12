#include<stdio.h>
int main()
{
    int num1,num2,sum;
    // printf("pls give the value of first number:");
    // scanf("%d",&num1);
    // printf("pls give the value of second number:");
    // scanf("%d",&num2);

    printf("enter 2 numbers\n");
    scanf("%d%d",&num1,&num2);

    // printf("num1 = %d \n",num1);
    // printf("num2 = %d \n",num2);

    sum=num1+num2;

    // printf("the sum is %d \n",sum);
    printf("the sum of %d and %d is %d \n",num1,num2,sum);

    return 0;
}
