/*E5_46*/
#include<stdio.h>
int main(void)
{
	int i;
	for(i=1; i<=80; i++)
	{
		if(i%8==0)
			printf("%2d\n",i);
		else
			printf("%2d\t",i);
	}
	return 0;
}