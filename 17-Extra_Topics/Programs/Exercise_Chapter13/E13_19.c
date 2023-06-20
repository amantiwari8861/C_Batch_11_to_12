/*E13_19*/
#include<stdio.h>
#define show(value)  printf(#value" = %d\n",value);
int main(void)
{
	int a=10,b=5,c=4;
	show(a/b*c);
	return 0;
}