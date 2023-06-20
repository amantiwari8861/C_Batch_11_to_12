/*E8.31*/
#include<stdio.h>
#define MAX 20
void sort_Columnwise(int a[MAX][MAX],int m,int n);
void sort_RowWise(int a[MAX][MAX],int m,int n);
int main(void)
{
	int a[MAX][MAX],i,j,m,n;
	printf("Enter number of rows : ");
	scanf("%d",&m);
	printf("Enter number of columns : ");
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
	
	sort_RowWise(a,m,n);
	printf("\n");
	for(i=0; i<m; i++)
	{
		for(j=0; j<n; j++)
			printf("%4d",a[i][j]);
		printf("\n");
	}
	sort_Columnwise(a,m,n);
	printf("\n");
	for(i=0; i<m; i++)
	{
		for(j=0; j<n; j++)
			printf("%4d",a[i][j]);
		printf("\n");
	}
	return 0;
}

void sort_Columnwise(int a[MAX][MAX],int m,int n)
{
	int k,xchanges,i,j,temp;
	for(k=0; k<n; k++)
	{
		/*Bubble sort*/
		for(i=0; i<m-1 ;i++)
		{
			xchanges=0;
			for(j=0; j<m-1-i; j++)
			{
				if(a[j][k] > a[j+1][k])
				{
					temp=a[j][k];
					a[j][k]=a[j+1][k];
					a[j+1][k]=temp;
					xchanges++;
				}
			}
			if(xchanges==0) /*If list is sorted*/
				break;
		}
	}
}

void sort_RowWise(int a[MAX][MAX],int m,int n)
{
	int i,j,k,temp,xchanges;
	for(k=0; k<m; k++)
	{
		for(i=0; i<n-1 ;i++)
		{
			xchanges = 0;
			for(j=0; j<n-1-i; j++)
			{
				if(a[k][j] > a[k][j+1])
				{
					temp=a[k][j];
					a[k][j]=a[k][j+1];
					a[k][j+1]=temp;
					xchanges++;
				}
			}
			if(xchanges==0) /*If list is sorted*/
				break;
		}
	}
}