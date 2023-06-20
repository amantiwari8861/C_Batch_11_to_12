/*E5_48*/
#include<stdio.h>
int main(void)
{
	int i,j,n;
	for(i=1; i<=10; i++)
	{
		scanf("%d",&n);
		for(j=1; j<=n; j++)
			printf("=");
		printf("\n");
	}
	return 0;
}
