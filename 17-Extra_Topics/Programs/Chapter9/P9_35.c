/*P9.35 Program to invoke a function using function pointer*/
#include<stdio.h>
float add(int,float),result;
int main(void)
{
	float (*fp)(int,float);
	float result;

	fp=add;	/*Assign address of function add() to pointer fp*/

	/*Invoking a function directly using function’s name */
	result = add(5,6.6);
	printf("%f\n",result);

	/*Invoking a function indirectly by dereferencing function pointer */
	result = (*fp)(5,6.6);
	printf("%f\n",result);
	return 0;
}
float add(int a,float b)
{
	return a+b;
}