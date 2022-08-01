#include<stdio.h>
int main()
{

	int num1,num2,result;
	/*printf("enter the value of num1 :");
	scanf("%d",&num1);// &(ampersand) -> address of
	printf("enter the value of num2 :");
	scanf("%d",&num2);*/

	printf("enter 2 values \n"); //  \n => next line
	scanf("%d%d",&num1,&num2); 

	result=num1+num2;
	printf("the sum of %d and %d is %d .",num1,num2,result);
	return 0;
}
