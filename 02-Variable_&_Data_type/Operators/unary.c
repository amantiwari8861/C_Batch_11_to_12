#include<stdio.h>
int main()
{
    //operators :  4 + 5 , here + is an operator and operands are 4 and 5
    //1. unary operators : in which single operand is required
    //2. binary operators : in which two operands are required
    //3. ternary operators : in which three operands are required

    //1. unary operators : ++ (increment) , --  (decrement)
    int num;
    printf("enter the value of num :");
    scanf("%d",&num);// let num=10

    // printf(" num = %d \n",num);//num = 10
    // num=num+1; //num=10+1 =11
    // printf(" num = %d after num+1 \n",num);//11
    num++;// 12
    // num++; or num=num+1; is same
    printf(" num = %d after num++\n",num);//12
    num--; 
    num--; 
    // num-- or num=num-1; is same
    printf(" num = %d after num-- \n",num);//11
    return 0;
}