#include<stdio.h>

int main()
{
    int num,i;
    printf("enter the number :");
    scanf("%d",&num);

    for (i = 1; i <= 10; i++)
    {
        printf(" %d X  %d = %d \n",num,i,num*i);
    }
    return 0;
}