#include<stdio.h>
int main()
{
	//Copy one array to another
	int size;
    printf("enter the size of array \n");
	scanf("%d",&size);
	int arr1[size];
	printf("enter the elements in array 1 \n");
	
	for(int i=0;i<size;i++)
	{
		scanf("%d",&arr1[i]);
	}
	int arr2[size];
	for(int i=0;i<size;i++)
	{
		arr2[i]=arr1[i];
	}
	for(int i=0;i<size;i++)
	{
		printf(" the copied array's %dth position is %d \n",i,arr2[i]);
	}
    return 0;
}