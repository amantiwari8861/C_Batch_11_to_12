/*E5_62*/
#include<stdio.h>
main()
{
	int i,j,n;
	printf("Enter n :");
	scanf("%d",&n);
	
	for(i=1; i<=n; i++)
	{
		for(j=1; j<=n; j++)
			printf("*"); 
		printf("\n");
	}

	printf("\n\n");
	for(i=1; i<=n; i++)
	{
		for(j=1; j<=n; j++)
			if(i==1 || i==n || j==1 || j==n) 
				printf("*"); 
			else
				printf(" "); 
		printf("\n");
	}

	printf("\n\n");
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			if(i==j)
				printf("\\");
			else if(i+j==n+1)
		        printf("/");
			else
				printf("*"); 
		}
		printf("\n");
	}
	printf("\n\n");
	return 0;
}