#include<stdio.h>
int main()
{
    int num1,num2,num3;
    printf("enter 3 variables :\n");
    scanf("%d%d%d",&num1,&num2,&num3);

    // Write a C program to find the largest of three numbers. 

    /* if (num1 > num2 && num1 >num3)
    {
        printf("%d is greater \n",num1);
    }
    else if (num2>num1 && num2>num3)
    {
        printf("%d is greater\n",num2);
    }
    else
    {
        printf("%d is greater \n",num3);
    }
    */
    if (num1>num2)
    {
        if (num1>num3)
        {
            printf("%d is greater\n",num1);
        }
    }
    else if (num2>num3)
    {
        printf("%d is greater\n",num2);
    }
    else
    {
        printf("%d is greater \n",num3);
    }


    return 0;
}
