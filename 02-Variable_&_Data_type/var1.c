#include<stdio.h>

int main()
{
    // int num=10,num2=60; //pre-defined value
    // printf("the value of num is %d and num2= %d \n ",num,num2);// 10 60
    int var1,var2,sum;
    printf("enter the value of var1 : ");
    // scanf("%d",&var1); // & (ampersand ) represents the address of container(variable)
    scanf("%d%d",&var1,&var2); // let var1=10, var2=50
    sum=var1+var2; // sum=60 //assingment is right to left
    printf("the sum of %d and %d is %d ",var1,var2,sum);
    return 0;
}
