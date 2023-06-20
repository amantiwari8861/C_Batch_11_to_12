/*E5_61*/
#include<stdio.h>
int main(void)
{
	int i,j,n;
	printf("Enter n : ");
	scanf("%d",&n);
	for(i=1; i<=n; i++)
	{
		if(i%2==0)
			printf(" ");
		for(j=1; j<=n; j++)
			printf("* ");  
		printf("\n");
	}
	return 0;
}