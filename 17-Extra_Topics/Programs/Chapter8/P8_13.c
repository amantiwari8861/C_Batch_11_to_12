/*P8.13 Tranpose of matrix. */
#include<stdio.h>
#define ROW 3
#define COL 4
int main(void)
{
	int mat1[ROW][COL], mat2[COL][ROW],i,j;
	printf("Enter matrix mat1(%dx%d) row-wise : \n",ROW,COL);
	for(i=0; i<ROW; i++)
		for(j=0; j<COL; j++)
			scanf("%d",&mat1[i][j]);
	
	for(i=0; i<COL; i++)
		for(j=0; j<ROW; j++)
			mat2[i][j]=mat1[j][i];

	printf("Transpose of matrix is:\n");
	for(i=0; i<COL; i++)
	{
		for(j=0; j<ROW; j++)
			printf("%5d",mat2[i][j]);
		printf("\n");
	}
	return 0;
}