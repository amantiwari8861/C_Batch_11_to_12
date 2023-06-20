/*E6.2*/
#include<stdio.h>
void func(int a,int b);
int main(void)
{
	int x;
	x=func(2,3);
	return 0;
} 
void func(int a,int b)
{
	int s;
	s=a+b;
	return;
}