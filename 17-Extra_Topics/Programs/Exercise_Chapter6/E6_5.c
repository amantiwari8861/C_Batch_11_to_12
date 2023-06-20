/*E6.5*/
#include<stdio.h>
int main(void)
{
	int s;	
	s=func(1,2);
	printf("%d\n",s);
	s=func(1,2,3,4);	
	printf("%d\n",s);
	return 0;
}
int func(int a,int b,int c)
{
	return a+b+c;
}
