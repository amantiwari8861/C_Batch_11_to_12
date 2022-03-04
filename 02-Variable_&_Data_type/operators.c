#include<stdio.h>
int main()
{
	//2. binary operators : in which two operands are required
		//a. arithematic operators : +,-,*,/, %(modulus)
	int num1,num2,result;
	printf("enter 2 values \n"); //  \n => next line
	scanf("%d %d",&num1,&num2);
	
	result=num1%num2;
	//Arithematic operators : +,-,*,/, % (modulus or mod it is used for remainder)
	// remainder = divide waala shesh
	printf("the result of %d and %d is %d .",num1,num2,result);
	return 0;
}

//h.w make volume of cone,cylinder,cuboid and other formulas.
