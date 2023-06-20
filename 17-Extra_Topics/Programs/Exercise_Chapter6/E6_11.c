/*E6.11*/
#include<stdio.h>
int diff(int x,int y)
{  return x-y; }
int sum(int x,int y)
{  return x+y; }
int main(void)
{
	int a=20,b=5,c=2,d=6;
	printf("%d\t",a+diff(d,c));
	printf("%d\n",diff(a,sum(diff(b,c),d))); 
	return 0;
}
