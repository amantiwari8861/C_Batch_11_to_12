#include<stdio.h>
int main()
{
    int num1,num2,result;
    printf("enter 2 numbers :\n");
    scanf("%d%d",&num1,&num2);

    //Euclidean Algorithm
    while (num2 != 0) 
    {
        int temp = num2;
        // printf("temp =%d ",temp);
        num2 = num1 % num2;
        // printf("num2 =%d ",num2);
        num1 = temp;
        // printf("num1 =%d \n",num1);
    }

    printf("GCD : %d ",num1);

    return 0;
}
