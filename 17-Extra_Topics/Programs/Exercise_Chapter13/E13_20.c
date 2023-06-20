/*E13_20*/
#include<stdio.h>
#define MACRO(a)  if(a<=5)  printf(#a" = %d\n",a);
int main(void)
{
	int x=6, y=15;
	if(x<=y)
		MACRO(x);
	else
		MACRO(y);
	return 0;
}