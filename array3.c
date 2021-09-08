#include<stdio.h>

int main()
{
    int marks[100];

    printf("enter 5 values \n");
    for (int i = 0; i < 100; i++)
    {
        scanf("%d",&marks[i]);
    }

    printf("\n ----------------------------------------  \n");

    for (int i = 0; i < 100; i++)
    {
        printf("the marks at %dth index is %d \n",i,marks[i]);
    }
    


    return 0;
}
