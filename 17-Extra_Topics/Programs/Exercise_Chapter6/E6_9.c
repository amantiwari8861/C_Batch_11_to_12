/*E6.9*/
#include<stdio.h>
int max(int a,int b)
{
	return a>b? a: b;
}
int main(void)
{
	int a=2,b=8,c=3;
	printf("%d\n",max(a,max(b,c)));
	return 0;
}
