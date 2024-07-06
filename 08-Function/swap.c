#include<stdio.h>
void swap(int num1,int num2) //pass by value (10 ,20)
{
    int c;
    c=num1;//c=10
    num1=num2;//num1=20
    num2=c;//num2=10
    printf("the value in swap fxn num1=%d and num2=%d \n",num1,num2); //20 10
}
int main()
{
    int num1,num2;
    printf("enter 2 numbers \n");
    scanf("%d%d",&num1,&num2);//let num1=10 num2=20
    printf("value before swapping in main num1=%d and num2=%d \n",num1,num2);//10 20
    swap(num1,num2);//pass by value or pass by value
    printf("value after swapping in main num1=%d and num2=%d \n",num1,num2); //20 10 ?
    return 0;
}