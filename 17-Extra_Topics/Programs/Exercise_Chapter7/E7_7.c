/*E7.7*/
#include<stdio.h>
int func(int a, int b);
int main(void)
{
	printf("%d\t",func(3,8));
	printf("%d\t",func(3,0));
	printf("%d\n",func(0,3));
	return 0;
}
int func(int a, int b) 
{
	if(b==0)
		return 0;
	if(b==1)
		return a;
	return a + func(a,b-1);
}