#include<stdio.h>
int main()
{
	//2. binary operators : in which two operands are required
		//a. arithematic operators : +,-,*,/, %(mod)
	int num1,num2,result;
	printf("enter 2 values \n"); //  \n => next line
	scanf("%d%d",&num1,&num2);// 27 4
	
	// result=num1+num2;
	// result=num1-num2;
	// result=num1*num2;
	// result=num1/num2;
	result=num1%num2; // 27%4 = 3
	// % (modulus or mod it is used to find remainder)
	// remainder = divide waala shesh
	printf("the result is %d \n",result);
	return 0;
}