/*E5_42*/
#include<stdio.h>
int main(void)
{
	int i;
	for(i=1; i<=5; i++)
	{
		if(i==3)
			continue;
		printf("%d ",i);
	}
	printf("\n");

	i=1;
	while(i<=5)
	{
		if(i==3)
			continue;
		printf("%d ",i);
		i++;
	}
	printf("\n");

	i=1;
	do
	{
		if(i==3)
			continue;
		printf("%d ",i);
		i++;
	}while(i<=5);
	return 0;
}