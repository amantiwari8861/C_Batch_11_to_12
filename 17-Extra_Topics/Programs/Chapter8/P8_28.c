/*P8.28 Magic matrix*/
#include<stdio.h>
#define MAX 20
int main(void)
{
	int a[MAX][MAX],i,j,n,num;
	printf("Enter value of n(odd value) : ");
	scanf("%d",&n);
	i=n-1;		/*Bottom row*/
	j=(n-1)/2;  /*Centre column*/

	for(num=1; num<=n*n; num++)
	{
			a[i][j]=num;
			i++;   /*move down*/
			j--;   /*move left*/
			if(num%n==0)
			{
				i-=2;	/*one above the previous row*/
				j++;	/*back to the previous column*/
			}
			else if(i==n)
				i=0;   /*go to topmost row*/
			else if(j==-1)
				j=n-1; /*go to rightmost column*/
	}
	for(i=0; i<n; i++)
	{
		for(j=0; j<n; j++)
			printf("%4d",a[i][j]);
		printf("\n");
	}
	return 0;
}