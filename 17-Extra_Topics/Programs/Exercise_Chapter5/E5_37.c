/*E5_37*/
#include<stdio.h>
int main(void)
{
	int i,sum,n;

	i=1;
	for( ; ; )
	{
		if(i==5)
			break;
		printf("%d\n",i);
		i++;
	}

	sum=0;
	for( ; ; )
	{
		if(sum>100)
			break;
		scanf("%d",&n);
		sum+=n;
	}
	return 0;
}
/*
int main(void)
{
	int i,sum,n;

	for(i=1; i!=5; i++)
		printf("%d\n",i);

	for(sum=0; sum<=100; sum+=n)
		scanf("%d",&n);
	return 0;
}
*/
