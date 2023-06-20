/*E15.9*/
#include<stdio.h>
void func1(void);
void func2(void);
int main(void)
{
	func1();	
	func2();
	return 0;
}
void func1(void)
{      
	extern int x;
	x++; 
	printf("%d\t",x);
}
int x=89;
void func2(void)
{       
	x++; 
	printf("%d\n",x);
}