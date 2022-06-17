#include<stdio.h>
int main()
{
    int num1,num2,result;
    printf("Enter two numbers: ");
    scanf("%d",&num1);
    scanf("%d",&num2);
    // scanf("%d%d",&num1,&num2);
    result=num1+num2; //right to left assignment
    // printf("the sum is %d ",result);
    printf(" the sum of %d and %d is %d ",num1,num2,result);


    return 0;
}
