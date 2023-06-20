/*E8.35*/
#include<stdio.h>
#define MAX 20
int main(void)
{
	int a[MAX][MAX],i,j,m,n,temp;
	printf("Enter the number of rows : ");
	scanf("%d",&m);
	printf("Enter the number of columns : ");
	scanf("%d",&n);

	for(i=0; i<m; i++)
	{
		for(j=0; j<n; j++)
			scanf("%d",&a[i][j]);
		printf("\n");
	}

	for(i=0; i<m; i++)
	{
		for(j=0; j<n; j++)
			printf("%4d",a[i][j]);
		printf("\n");
	}

	/*Interchange columns 0 and n-1*/
	for(i=0; i<m; i++)
	{
		temp=a[i][0];
		a[i][0]=a[i][n-1];
		a[i][n-1]=temp;
	}

	printf("\n");
	for(i=0; i<m; i++)
	{
		for(j=0; j<n; j++)
			printf("%4d",a[i][j]);
		printf("\n");
	}
	return 0;
}
