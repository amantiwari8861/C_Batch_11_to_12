#include<stdio.h>
int add(int num1,int num2){return num1+num2;}
int main()
{
    int num1,num2,result=0;
    printf("enter 2 values :\n");
    scanf("%d%d",&num1,&num2);
    char ch;
    printf("enter operation :");
    fflush(stdin);
    scanf("%c",&ch);
    fflush(stdin);
    switch (ch)
    {
    case '+':
        result=add(num1,num2);
        break;
    
    default:
        printf("invalid operation! \n");
        break;
    }
    printf("the result is %d \n",result);
    return 0;
}
