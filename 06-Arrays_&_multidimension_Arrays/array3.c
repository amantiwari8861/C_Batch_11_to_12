#include<stdio.h>
int main()
{
    int marks[10];
    printf("enter 10 values \n");
    for (int i = 0; i < 10; i++)
    {
        printf("enter value of marks[%d] :",i);
        scanf("%d",&marks[i]);
    }

    printf("\n the entered marks are : \n");
    for (int i = 0; i < 10; i++)
    {
        printf("the marks at %dth index is %d \n",i,marks[i]);
        // printf(" %d \n",marks[i]);
    }
    return 0;
}
