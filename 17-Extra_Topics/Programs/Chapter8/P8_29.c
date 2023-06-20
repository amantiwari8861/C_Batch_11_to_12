/*P8.29 Prime numbers using sieve*/
#include<stdio.h>
#define MAX 10000
int main(void)
{
	int p,i,n,a[MAX]={0};
		
	printf("Enter n : ");
	scanf("%d",&n);
    
	p=2;
	while(p*p <= n) 
	{
		for(i=2; i*p<=n; i++) 	/*Cross out all multiples of p*/
			a[i*p]=1;
				
		for(i=p+1; i<=n; i++) /*Find next uncrossed*/
			if(a[i]==0)
			{
				p=i;
				break;
			}
	}
	/*Print all uncrossed integers*/
	for(i=2; i<=n; i++)
		if(a[i]==0)
			printf("%d ",i);
	return 0;
}