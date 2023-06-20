/*P8.44*/
#include<stdio.h>
#define MAX 20
int main(void)
{
	int a[MAX][MAX],i,j,n,start,end;
	printf("Enter value of n : ");
	scanf("%d", &n);

	j=1;
	for(start=0,end=n-1; start<=end; start++,end--)
	{
		for(i=start; i<=end; i++)
			a[start][i]=j++;
		for(i=start+1; i<=end; i++)
			a[i][end]=j++;
		for(i=end-1; i>=start; i--)
			a[end][i]=j++;
		for(i=end-1; i>=start+1; i--)
			a[i][start]=j++;
	}

	for(i=0; i<n; i++)
	{
		for(j=0; j<n; j++)
			printf("%4d", a[i][j]);
		printf("\n");
	}
	printf("\n\n");
	return 0;
}