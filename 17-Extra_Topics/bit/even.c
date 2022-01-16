#include<stdio.h>

int main()
{
    int num;
    printf("enter the number :\n");
    scanf("%d",&num);

    if (num&1)
    {
        printf("odd !\n");
    }
    else
    {
        printf("even ! \n");
    }
    


    return 0;
}
