/*E15.7*/
#include<stdio.h>
int x=89;
void func1(int x);
void func2(void);
int main(void)
{
	func1(x);	
	printf("%d\t",x);
 	func2();	
	printf("%d\n",x);
	return 0;
}
void func1(int x)
{      
	x++; 
}
void func2(void)
{
	x++;
}