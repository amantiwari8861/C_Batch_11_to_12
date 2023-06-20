/*P9.33 Program to dynamically allocate a 2-D array*/
#include<stdio.h>
#include<stdlib.h>
int main(void)
{
	int **a,i,j,rows,cols;
	printf("Enter number of rows and columns : ");
	scanf("%d%d",&rows,&cols);
	/*Allocate a one dimensional array of int pointers*/
	a=(int **)malloc(rows*sizeof(int *));
	
	/*Allocate a one dimensional array of integers for each row pointer */ 
	for(i=0; i<rows; i++)
		a[i] = (int *)malloc(cols * sizeof(int));

	for(i=0; i<rows; i++)
		for(j=0; j<cols; j++)
		{
			printf("Enter a[%d][%d] : ",i,j);
			scanf("%d",&a[i][j]);
		}
	printf("The matrix is :\n");
	for(i=0; i<rows; i++)
	{
		for(j=0; j<cols; j++)
			printf("%5d",a[i][j]);
		printf("\n");
	}

	for(i=0; i<rows; i++)
		free(a[i]);
	free(a);
	return 0;
}