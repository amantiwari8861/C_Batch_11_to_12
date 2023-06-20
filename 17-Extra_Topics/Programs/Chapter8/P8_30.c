/*P8.30*/
#include<stdio.h>
#define MAX 20
int main(void)
{
	int a[MAX][MAX],i,j,n,start,end;
	printf("Enter value of n : ");
	scanf("%d", &n);
	
	for(i=0; i<n; i++)
	{
		for(j=0; j<n; j++)
			scanf("%d", &a[i][j]);
		printf("\n");
	}
	for(i=0; i<n; i++)
	{
		for(j=0; j<n; j++)
			printf("%4d", a[i][j]);
		printf("\n");
	}
	printf("\n\n");

	for(start=0,end=n-1; start<=end; start++,end--)
	{
		for(i=start; i<=end; i++)
			printf("%d ",a[start][i]);
		for(i=start+1; i<=end; i++)
			printf("%d ",a[i][end]);
		for(i=end-1; i>=start; i--)
			printf("%d ",a[end][i]);
		for(i=end-1; i>=start+1; i--)
			printf("%d ",a[i][start]);
	}
	return 0;
}