/*E8.36*/
#include<stdio.h>
#define MAX 20
int main(void)
{
	int a[MAX][MAX],i,j,m,n,temp,p,q;
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

	for(p=0,q=n-1; p<q; p++,q--)
	/*Interchange columns p and q*/
	for(i=0; i<m; i++)
		{
			temp=a[i][p];
			a[i][p]=a[i][q];
			a[i][q]=temp;
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