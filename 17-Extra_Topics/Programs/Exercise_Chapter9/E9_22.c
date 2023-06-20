/*E9.22*/
#include<stdio.h>
void func(int x,int y);
int main(void)
{
	int a=5,b=8;
	func(a,b);
	printf("a=%d,b=%d\n",a,b);
	return 0;
}
void func(int x,int y)
{
	int temp;
	temp=*(&x), *(&x)=*(&y), *(&y)=temp;
}
