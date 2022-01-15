#include<stdio.h>
int main()
{
    int num1,num2;
    printf("enter 2 numbers \n");
    scanf("%d%d",&num1,&num2);

    if (num1 == num2)
    {
        printf("the values are equal \n");
    }
    else
    {
        printf("not equal!\n");
    }
    return 0;
}
