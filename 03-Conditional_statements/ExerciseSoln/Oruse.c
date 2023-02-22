#include<stdio.h>
int main()
{
    // int num;
    // scanf("%d",&num);

    // if (num==1 || num==3 || num==5 || num==7)
    // {
    //     printf("prime no. \n");
    // }
    // else
    // {
    //     printf("not prime");
    // }

    //4 -> num==num2  num2==num4 num>num3

    printf("enter 4 no. :");
    int num1,num2,num3,num4;
    scanf("%d%d%d%d",&num1,&num2,&num3,&num4);

    if(num1==num2 && num2==num4 && num1>num3)
    {
        printf("the condition is right \n");
    }
    else
    {
        printf("Wrong.");
    }
    


    return 0;
}
