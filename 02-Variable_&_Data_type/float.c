#include<stdio.h>
int main()
{
	float num1,num2,result;
	
	printf("enter 2 values \n"); //  \n => next line
	scanf("%f%f",&num1,&num2);
	
	result=num1+num2;
	printf("the sum of %f and %f is %f .\n",num1,num2,result);

	printf("the sum of %.2f and %.3f is %.2f .",num1,num2,result);
	
	return 0;
}
