/*E6.8*/
#include<stdio.h>
int min(int a,int b);
int main(void)
{
	int a=10,b=5;
	printf("%d\n",min(a,b));
	return 0;
}
int min(int a,int b)
{
	a<b? return a: return b;
}
