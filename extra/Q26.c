#include<stdio.h>
int main()
{
    int choice,num1,num2,result;
    printf("\
    1.Add \n\
    2.Subtract \n\
    3.multiply \n\
    4.divide\n");
    printf("enter ur choice :");
    scanf("%d",&choice);

    printf("enter 2 numbers:\n");
    scanf("%d%d",&num1,&num2);
    switch (choice)
    {
    case 1:
        result=num1+num2;
        break;
    case 2:
        result=num1-num2;
        break;
    case 3:
        result=num1*num2;
        break;
    case 4:
        result=num1/num2;
        break;
    
    default:printf("invalid choice\n");
        break;
    }
    printf("the result is %d \n",result);

    return 0;
}
