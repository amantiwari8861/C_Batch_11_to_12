#include<stdio.h>
int main()
{
    int num;
    printf("Enter the number \n");
    scanf("%d",&num);

    if (num>0)
    {
        printf("positive number!\n");
    }
    else if (num==0)
    {
        printf(" equal to Zero!\n");
    }
    else
    {
        printf(" negative number \n");
    }
    
    return 0;
}
