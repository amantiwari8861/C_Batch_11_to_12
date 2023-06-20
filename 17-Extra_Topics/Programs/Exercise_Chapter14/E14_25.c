/*P14.25*/
#include<stdio.h>
int main(void)
{
	int x=511;
	if((x&(x+1))==0)
		printf("Yes\n");
	else
		printf("No\n");
	return 0;
}
