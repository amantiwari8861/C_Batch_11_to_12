#include<stdio.h>
int main()
{
	double num1,num2,result;
	
	printf("enter 2 values \n"); //  \n => next line
	scanf("%lf %lf",&num1,&num2);
	
	result=num1+num2;
	
	printf("the sum of %lf and %lf is %lf .",num1,num2,result);
	
	return 0;
}
