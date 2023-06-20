/*E8.7*/
#include<stdio.h>
int main(void)
{
	int i,j,arr[3][4]={ {1,2,3,4}, {5,6,7,8}, {9,10,11,12} };
	for(i=0; i<4; i++)
	{
		for(j=0; j<3; j++)
			printf("%3d",arr[j][i]);
		printf("\n");
	}
	return 0;
}