#include<stdio.h>
#include<conio.h>
int main()
{
	int num1,num2,result;
	// int num1=50,num2=60,result; 
	//we r giving pre defined(hard quoted) value to variable num1 and num2
	printf("enter 2 values \n"); //  \n => next line
	scanf("%d %d",&num1,&num2); // &(ampersand) -> address of
//scanf is a pre-defined function which is used to take the input from user( who runs the program)
	//syntax: scanf("format_specifier",&variable_name);
	result=num1+num2;
	printf("the sum of %d and %d is %d .",num1,num2,result);
	getch();
	return 0;
}
