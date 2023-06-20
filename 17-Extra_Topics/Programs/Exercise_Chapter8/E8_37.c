/*E8.37*/
#include<stdio.h>
#define MAX 20
int isSymmetric(int a[MAX][MAX],int n);
int main(void)
{
	int a[MAX][MAX],i,j,n;
	printf("Enter the number of rows : ");
	scanf("%d",&n);
	for(i=0; i<n; i++)
	{
		for(j=0; j<n; j++)
			scanf("%d",&a[i][j]);
		printf("\n");
	}
	for(i=0; i<n; i++)
	{
		for(j=0; j<n; j++)
			printf("%4d",a[i][j]);
		printf("\n");
	}
	if(isSymmetric(a,n))
		printf("Matrix is symmetric\n");
	else
		printf("Matrix is not symmetric\n");
	return 0;
}
int isSymmetric(int a[MAX][MAX],int n)
{
	int i,j;
	for(i=0; i<n; i++)
	{
		for(j=0; j<n; j++)
			if( a[i][j] != a[j][i] )
				return 0;
    }
	return 1;
}
