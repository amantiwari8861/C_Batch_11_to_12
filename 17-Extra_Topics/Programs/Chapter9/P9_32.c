/*P9.32 Program to dynamically allocate a 2-D array using array of pointers*/
#include<stdio.h>
#include<stdlib.h>
int main(void)
{
	int *a[3],i,j,cols;
	printf("Enter number of columns : ");
	scanf("%d",&cols);	
	/*Initialize each pointer in array by address of dynamically allocated memory*/
	for(i=0; i<3; i++)
		a[i] = (int *) malloc(cols*sizeof(int));
	for(i=0; i<3; i++)
		for(j=0; j<cols; j++)
		{
			printf("Enter value for a[%d][%d] : ",i,j);
			scanf("%d",&a[i][j]);
		}
	printf("The matrix is :\n");
	for(i=0; i<3; i++)
	{
		for(j=0; j<cols; j++)
			printf("%5d",a[i][j]);
		printf("\n");
	}
	for(i=0; i<3; i++)
		free(a[i]);
	return 0;
}
