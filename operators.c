#include<stdio.h>
int main()
{
	int num1,num2,result;
	//rules for defining variable name
	//1. there will be no space between them like this int sum this=10; 
	//2. no pre-defined name like int char=19;
	//3. do not use numeric before name like int 1num=20;
	
	printf("enter 2 values \n"); //  \n => next line
	scanf("%d %d",&num1,&num2);
	
	result=num1%num2;
	//Arithematic operators : +,-,*,/, % (modulus or mod it is used for remainder)
	// remainder = divide waala shesh
	printf("the sum of %d and %d is %d .",num1,num2,result);
	
	return 0;
}

//h.w make volume of cone,cylinder,cuboid and other formulas.
// 14 15 17 holiday


