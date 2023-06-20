/*E15.18*/
#include<stdio.h>
#include<stdarg.h>
void func(int a, ... ,int b);  
int main(void)
{
	int a=2,b=3,c=4,d=5;
	func(4,2,3,8,5);
	return 0;
}
void func(int a, ... ,int b)  
{
	va_list *ap;
	va_start(ap,a);
	for(i=0; i<b; i++)
		printf("%d",va_arg(ap,int));
	va_end;
}
