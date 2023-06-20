/*E8.33*/
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
	
	/*Interchange rows 0 and m-1*/
	for(j=0; j<n; j++)
	{
		temp=a[0][j];
		a[0][j]=a[m-1][j];
		a[m-1][j]=temp;
	}

	printf("\n\n");
	for(i=0; i<m; i++)
	{
		for(j=0; j<n; j++)
			printf("%4d",a[i][j]);
		printf("\n");
	}
	return 0;
}