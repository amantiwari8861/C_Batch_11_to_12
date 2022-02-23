#include<stdio.h>
int main()
{
    int num;
    printf("enter the value of num :");
    scanf("%d",&num);// let num=10

    printf(" num = %d \n",num);//10
    num=num+1;
    printf(" num = %d \n",num);//11
    num++;
    // num++; or num=num+1; is same
    printf(" num = %d \n",num);//12
    num--;
    // num-- or num=num-1; is same
    printf(" num = %d \n",num);//11
    return 0;
}