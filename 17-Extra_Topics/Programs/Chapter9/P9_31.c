/*P9.31 Program to dynamically allocate a 2-D array using pointer to an array*/
#include<stdio.h>
#include<stdlib.h>
int main(void)
{
	int i,j,rows;
	int (*a)[4];
	printf("Enter number of rows : ");
	scanf("%d",&rows);
	a = (int(*)[4])malloc(rows*4*sizeof(int));
	for(i=0; i<rows; i++)
		for(j=0; j<4; j++)
		{
			printf("Enter a[%d][%d] : ",i,j);
			scanf("%d",&a[i][j]);
		}
	printf("The matrix is :\n");
	for(i=0; i<rows; i++)
	{
		for(j=0; j<4; j++)
			printf("%5d",a[i][j]);
		printf("\n");
	}
	free(a);
	return 0;
}