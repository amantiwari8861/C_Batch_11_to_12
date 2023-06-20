/*E5_34*/
#include<stdio.h>
int main(void)
{
	int i,j,k;
    
	printf("(i)\n"); 
	for(i=1; i<=6; i++)
		printf("*");

	printf("\n\n(ii)\n");
	for(j=1; j<=5; j++)
		for(i=1; i<=6; i++)
			printf("*");
	printf("\n");

	printf("\n\n(iii)\n"); 
	for(j=1; j<=5; j++)
    {
		for(i=1;i<=6;i++)
			printf("*");
		printf("\n");
    }

	printf("\n\n(iv)\n"); 
	for(k=1; k<=3; k++)
    {	
		for(j=1; j<=5; j++)
		{
			for(i=1; i<=6; i++)
				printf("*");
			printf("\n");
		}
		printf("\n");
    }
	return 0;
}

