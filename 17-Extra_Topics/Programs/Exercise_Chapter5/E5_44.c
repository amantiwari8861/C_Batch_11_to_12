/*E5_44*/
#include<stdio.h>
int main(void)
{
	int i,x,sum;

	for(i=1; i<6; i++)
	{
		if(i==3)
			continue;
		printf("%d ",i);
	}
	printf("\n");

	x=0,sum=0;
	while(x<10)
	{
		x++;
		if(x%2==0)
			continue;
		sum+=x;
	}
	printf("%d ",sum);
	printf("\n");
	return 0;
}

/*
int main(void)
{
	int i,x,sum;

	for(i=1; i<6; i++)
	{
		if(i!=3)
			printf("%d ",i);	
	}
	printf("\n");

	x=0,sum=0;
	while(x<10)
	{
		x++;
		if(x%2!=0)
			sum+=x;
	}
	printf("%d ",sum);
	return 0;
}
*/