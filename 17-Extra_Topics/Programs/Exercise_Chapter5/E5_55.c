/*E5_55*/ 
#include<stdio.h>
int main(void)
{
	int i,n,sum;
    printf("Enter n : ");
	scanf("%d",&n);
	
	sum=0;
	for(i=1; i<=n; i++)
		sum+=i*i;
	printf("%d\n",sum);
	return 0;
}