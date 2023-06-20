/*E5_32*/
#include<stdio.h>
int main(void)
{
	int i,j;
	for(j=i+1,i=1; i<=5; j++,i++)
		printf("%d %d\n",i,j);
	return 0;
}
