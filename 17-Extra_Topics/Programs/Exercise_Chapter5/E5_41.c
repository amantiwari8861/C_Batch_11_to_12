/*E5_41*/
#include<stdio.h>
int main(void)
{
	int i;

	for(i=1; i<=5; i++)
		printf("%d ",i);
	printf("\n");

	i=1;
	while(i<=5)
	{
		printf("%d ",i);
		i++;
	}
	printf("\n");

	i=1;
	do
	{
		printf("%d ",i);
		i++;
	}while(i<=5);
	printf("\n");
	return 0;
}