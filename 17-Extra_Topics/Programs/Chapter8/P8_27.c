/*P8.27 Pascal's triangle*/
#include<stdio.h>
#define MAX 15
int main(void)
{
	int a[MAX][MAX];
	int i,j,n;
	printf("Enter n : ");
	scanf("%d",&n);
	for(i=0; i<=n; i++)
	{
		for(j=0; j<=i; j++)
			if(j==0 || i==j)
				a[i][j]=1;
			else 
				a[i][j]=a[i-1][j-1]+a[i-1][j];
	}
	for(i=0; i<n; i++)
	{
		for(j=0; j<=i; j++)
			printf("%5d",a[i][j]);
		printf("\n");
	}
	return 0;
}