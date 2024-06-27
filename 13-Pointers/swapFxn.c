#include<stdio.h>
// void swap(int*,int*);
void swap(int *num1,int *num2)
{
    // printf("address of num1=%d num2=%d in swap\n",num1,num2);
    int c;
    c=*num1; // c= *num1(value at address num1) //c=10
    *num1=*num2; //*num1=20
    *num2=c;//*num2=10
    printf("after swapping in swap fxn num1=%d and num2=%d \n",*num1,*num2);//20 10 
}
int main()
{
    int num1,num2;
    printf("enter 2 numbers \n");
    scanf("%d %d",&num1,&num2);//10 20
    printf("value before swapping in main num1=%d and num2=%d \n",num1,num2);//10 20
    // printf("address of num1=%d num2=%d in main\n",&num1,&num2);
    swap(&num1,&num2);//call by reference or pass by reference (reference = address)
    printf("value after swapping in main num1=%d and num2=%d \n",num1,num2); //20 10
    return 0;
}