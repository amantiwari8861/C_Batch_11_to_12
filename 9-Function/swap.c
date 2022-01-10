#include<stdio.h>
void swap(int num1,int num2) //call by value
{
    int c;
    c=num1;
    num1=num2;
    num2=c;
    printf("the value in swap fxn num1=%d and num2=%d \n",num1,num2); //20 10
}
int main()
{
    int num1,num2;
    printf("enter 2 numbers \n");
    scanf("%d %d",&num1,&num2);//10 20
    printf("the value before swapping in main num1=%d and num2=%d \n",num1,num2);//10 20
    swap(num1,num2);//call by value
    printf("the value after swapping in main num1=%d and num2=%d \n",num1,num2); //20 10 ?
    return 0;
}
