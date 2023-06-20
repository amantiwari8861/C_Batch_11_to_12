/*E8.42*/
#include<stdio.h>
#define MAX 20
int main(void)
{
	int a[MAX][MAX],i,j,m,n;
	printf("Enter value of m (rows): ");
	scanf("%d",&m);
	printf("Enter value of n (columns): ");
	scanf("%d",&n);

	for(i=0; i<m; i++)
	{
		for(j=0; j<n; j++)
			scanf("%d",&a[i][j]);
		printf("\n");
	}
	
	for(i=0; i<m; i++)
	{
		a[i][n]=0;
		for(j=0; j<n; j++)
			a[i][n]+=a[i][j];
	}
	for(j=0; j<=n; j++)
	{
		a[m][j]=0;
		for(i=0; i<m; i++)
			a[m][j]+=a[i][j];
	}
	
	for(i=0; i<=m; i++)
	{
		for(j=0; j<=n; j++)
			printf("%4d",a[i][j]);
		printf("\n");
	}
	return 0;
}
