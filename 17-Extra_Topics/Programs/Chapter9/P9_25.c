/*P9.25 Array of pointers*/
#include<stdio.h>
int main(void)
{
	int i,j,arr[3][4]={{10,11,12,13},{20,21,22,23},{30,31,32,33}};
	int *pa[3];
	for(i=0; i<3; i++)
		pa[i]=arr[i];

	for(i=0; i<3; i++)
	{	
		for(j=0; j<4; j++)
			printf("%d  ",pa[i][j]);
		printf("\n");
	}
	return 0;
}