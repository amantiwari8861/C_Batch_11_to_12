#include<stdio.h>
int main()
{
	int num1,num2,result;
	printf("enter 2 values \n"); //  \n => next line
	scanf("%d %d",&num1,&num2);
	
	result=num1+num2;
	printf("the sum of %d and %d is %d \n",num1,num2,result);
	
	result=num1-num2;
	printf("the subtract of %d and %d is %d \n",num1,num2,result);
	
	result=num1*num2;
	printf("the multiply of %d and %d is %d \n",num1,num2,result);
	
	result=num1/num2;
	printf("the divide of %d and %d is %d \n",num1,num2,result);
	
	return 0;
}