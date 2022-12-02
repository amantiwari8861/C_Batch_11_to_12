#include<stdio.h>
int main()
{
    int num;
    printf("enter num:");
    scanf("%d",&num);

    for (int i = 1; i <= num; i++)
    {
        printf(" The cube of the %d is  %d \n",i,i*i*i);
    }
    
    return 0;
}