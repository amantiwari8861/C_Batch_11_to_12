/*P15.6 Program to understand the use of local static variables*/
#include<stdio.h>
void func(void);
int main(void)
{
	func();
	func();
	func();	
	return 0;
}
void func(void)
{
	static int x=2, y=5;
	printf("x=%d, y=%d\n",x,y);
	x++;   
	y++;
}