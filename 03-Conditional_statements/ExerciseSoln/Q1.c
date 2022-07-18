#include<stdio.h>
int main()
{
    int num1,num2;
    printf("enter 2 numbers :");
    scanf("%d%d",&num1,&num2);

    if (num1==num2)
    {
        printf(" both are equal \n");
    }
    else
    {
        printf("both are not equal \n");
    }
    return 0;
}
