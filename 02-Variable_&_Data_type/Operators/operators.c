#include<stdio.h>
int main()
{
	//2. binary operators : in which two operands are required
		//a. arithematic operators : +,-,*,/, %(modulus)
	int num1,num2,result;
	printf("enter 2 values \n"); //  \n => next line
	scanf("%d %d",&num1,&num2);// 27 4
	
	// result=num1+num2;
	result=num1%num2; // 27%4 = 3
	// % (modulus or mod it is used to find remainder)
	// remainder = divide waala shesh
	printf("the remainder after dividing %d with %d is %d .",num1,num2,result);
	return 0;
}

//h.w make volume of cone,cylinder,cuboid and other formulas.
