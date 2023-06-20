/*E5_59*/ 
#include<stdio.h>
int main(void)
{
	int i,j,n,x,term,sum;
	
	printf("Enter n : ");
	scanf("%d",&n);
	
	sum=0;term=1;
	for(i=1; i<=n; i++,term=term*10+1)
	{
		printf("%d+",term);
		sum+=term;
	}
	printf("\b=%d\n",sum);

	printf("Enter x : ");
	scanf("%d",&x);

	sum=0; 
	for(i=1,term=x; i<=n; i++,term*=x)
	{
		printf("%d + ",term);
		sum+=term;
	}
	printf("\b\b=%d\n",sum);

	sum=0; 
	for(i=1,term=x; i<=n; i++,term*=-x)
	{
		printf("%d + ",term);
		sum+=term;
	}
	printf("\b\b=%d\n",sum);
	return 0;
}