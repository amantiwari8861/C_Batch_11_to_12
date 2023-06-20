/*E15.13*/
#include<stdio.h>
void func(int a[],const int b[],int c[]);
int main(void)
{
	int a[]={1,2,3,4};
	int b[]={5,6,7,8};
	int c[]={9,10,11,12};
	func(a,b,c);
	return 0;
}
void func(int a[],const int b[],int c[])
{
	a=c;
	a[0]++;
	b=c;
	b[0]++;
}