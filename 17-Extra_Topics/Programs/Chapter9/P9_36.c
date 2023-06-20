/*P9.36  Program to send a function's address as an argument to other function*/
#include<stdio.h>
void func(char,void(*fp)(float));
void fun1(float);
int main(void)
{
	printf("Function main() called\n");
	func('a',fun1);
	return 0;
}
void func(char b,void(*fp)(float))	
{
	printf("Function func() called\n");
	(*fp)(8.5);	
}
void fun1(float f)
{
	printf("Function fun1() called\n");
}