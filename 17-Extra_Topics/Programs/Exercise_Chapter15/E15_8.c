/*E15.8*/
#include<stdio.h>
void func(void);
int x=2;
static int y=5;
int main(void)
{
	int x=3;
	func();
	func();
	printf("Inside main() : x=%d, y=%d\n",x,y);
	return 0;
}
void func(void)
{
	static int x;
	x=x+2;
	printf("Inside func(): x=%d, y=%d\n",x,y);
}