/*P9.13 Program to print the values and address of elements of a 2-D array*/
#include<stdio.h>
int main(void)
{
	int arr[3][4]= {
						{10,11,12,13}, 
						{20,21,22,23}, 
						{30,31,32,33}
	         	   };
	int i,j;
	for(i=0; i<3; i++)
	{
		printf("Address of %dth array = %p %p\n",i,arr[i],*(arr+i));
		for(j=0; j<4; j++)
			printf("%d %d ",arr[i][j],*(*(arr+i)+j));
		printf("\n");
	}
	return 0;
}