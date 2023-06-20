#include<stdio.h>
// #include<windows.h>
int main()
{	
	// for(int i=0;i<5;i++)//row
	// {
	// 	for(int j=0;j<10;j++)//column
	// 	{
	// 		// Sleep(100);
	// 		printf("*");  
	// 	}
	// 	printf("\n");
	// }

	int row,col;
	printf("Enter row and columns :");
	scanf("%d%d",&row,&col);

	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			printf("*");
		}
		printf("\n");		
	}
	

	return 0;
}