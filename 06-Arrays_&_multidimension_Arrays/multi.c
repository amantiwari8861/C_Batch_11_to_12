#include<stdio.h>
void main()
{
	int a,b,c,d,i,j,k,sum;
	printf("enter the order of 1st matrix");
	scanf("%d%d",&a,&b);
	printf("enter the order of 2nd matrix");
	scanf("%d%d",&c,&d);
	
	if(b==c)
	{
		printf("the given order is correct");
		
		printf("enter the 1st matrix");
		
			for(i=0;i<a;i++)
			{
				for(j=0;j<b;j++)
				{
					int matr[a][b];
					scanf("%d",&matr[a][b]);
				}
			}
			
		printf("enter the 2nd matrix");
		
		for(i=0;i<c;i++)
		{
			for(j=0;j<d;j++)
			{
				int matr1[c][d];
				scanf("%d",&matr1[c][d]);
			}
		}
		
		printf("the multiplication of matrix is :");
		
			for(i=0;i<a;i++)
			{
				for(j=0;j<b;j++)
				{
					sum=0;
				for(k=0;k<d;k++)
				{
					int matr[a][b],matr1[c][d],matr2[a][d];
					sum=sum+matr[a][b]*matr1[i][j];
				}
				int matr2[i][j];
				matr2[i][j]=sum;
				}
			}
		printf("\n multiplication of 2 matrix is \n");
		
		for(i=0;i<b;i++)
		{
			for(j=0;j<c;j++)
			{
				int matr2[i][j];
				printf("%d",matr2[i][j]);
			}
			printf("\n");
		}
	}
	else
	{
		printf("the order of matrix is wrong");
	}
}
		
		
		
	
	