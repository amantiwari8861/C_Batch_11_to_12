#include<stdio.h>
void main()
{
    int num;
    printf(" give a number :");
    scanf("%d",&num);

    if (num%2 == 0)
    {
        printf("the number is even \n");
    }
    else
    {
        printf("the number is odd \n");
    }
}