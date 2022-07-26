#include<stdio.h>
int main()
{
    int num;
    printf("enter num:");
    scanf("%d",&num);

    for (int i = 1; i <= num; i++)
    {
        printf(" %d \n",i*i*i);
    }
    
    return 0;
}
