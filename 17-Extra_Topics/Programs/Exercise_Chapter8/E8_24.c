/*E8.24*/
#include <stdio.h>
#define MAX 50
int AllDistinct(int arr[],int size);
int main(void)
{
	int i,arr[MAX],size;
	printf("Enter size of array : ");
	scanf("%d",&size);
	printf("Enter array : ");
	for(i=0; i<size; i++)
		scanf("%d",&arr[i]);

	if(AllDistinct(arr,size))
		printf("All elements are distinct\n");
	else
		printf("All elements are not distinct\n");
	return 0;
}
int AllDistinct(int arr[],int size)
{
	int i,j;
	for(i=0; i<size; i++)
		for(j=i+1; j<size; j++)
			if(arr[i]==arr[j])/*Duplicate found*/
				return 0;
	return 1;		
}
