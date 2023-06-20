/*E13_6*/
#include<stdio.h>
#define INFINITE  while(1)
#define CHECK(a)  if(a==0) break
int main(void)
{
	int x=5;
	INFINITE
	{
	       printf("%d ",x--);
	       CHECK(x);
	}
	return 0;
}