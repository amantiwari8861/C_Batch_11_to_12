/*E8.43*/
#include <stdio.h>
#define MAX 20
int main(void)
{
	int a[MAX][MAX],i,j,k,m,n,rStart,cStart,rEnd,cEnd;

	printf("Enter value of m (rows): ");
	scanf("%d", &m);
	printf("Enter value of n (columns): ");
	scanf("%d", &n);

	for(i=0; i<m; i++)
	{
		for(j=0; j<n; j++)
			scanf("%d",&a[i][j]);
		printf("\n");
	}

	for(i=0; i<m; i++)
	{
		for(j=0; j<n; j++)
			printf("%4d", a[i][j]);
		printf("\n");
	}
	printf("\n\n");

	for(rStart=0,cStart=0,rEnd=m-1,cEnd=n-1; rStart<=rEnd && cStart<=cEnd; rStart++,cStart++,rEnd--,cEnd--)
	{
      	for(k=cStart; k<=cEnd; k++) 
			printf("%d* ",a[rStart][k]);
		for(k=rStart+1; k<=rEnd; k++) 
			printf("%d$ ",a[k][cEnd]);
		if(rStart<rEnd)
			for(k=cEnd-1; k>=cStart; k--)
				printf("%d# ",a[rEnd][k]);
		if(cStart<cEnd)
			for(k=rEnd-1; k>=rStart+1; k--)
				printf("%d& ",a[k][cStart]);
	}
	return 0;
}