/*P15.5*/
#include<stdio.h>
int main(void)
{
	register int i;
	for(i=0; i<20000; i++)
		printf("%d\n",i);
	return 0;
}
