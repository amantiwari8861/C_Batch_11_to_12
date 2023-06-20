/*P9.37 Program to pass a pointer containing function's address as an argument*/
#include<stdio.h>
void func(char,void(*fp)(float));
void fun1(float);
int main(void)
{
	void (*p)(float);
	p=fun1;
		
	printf("Function main() called\n");
	func('a',p);
	return 0;
}
void func(char b,void(*fp)(float))		/*Value of p stored in fp*/
{
	printf("Function func() called\n");
	(*fp)(8.5);	/*Calling fun1 indirectly using pointer */
}
void fun1(float f)
{
	printf("Function fun1() called \n");
}