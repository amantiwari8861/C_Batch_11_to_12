/*E8.25*/
#include <stdio.h>
#define MAX 50
int deleteDuplicates(int arr[],int size);
int main(void)
{
	int i,arr[MAX],size;
	printf("Enter size of array : ");
	scanf("%d",&size);
	printf("Enter array : ");
	for(i=0; i<size; i++)
		scanf("%d",&arr[i]);

	size=deleteDuplicates(arr,size);
	for(i=0; i<size; i++)
		printf("%d ",arr[i]);
	return 0;
}
int deleteDuplicates(int arr[],int size)
{
	int i,j,k;
	for(i=0; i<size; i++)
	{
		for(j=i+1; j<size;  )
		{
			if(arr[i]==arr[j])/*Duplicate found*/
			{
				size--;
				for(k=j; k<size; k++)
						arr[k]=arr[k+1];
			}
			else
				j++;	/*Continue Comparing*/
		}
	}
	return size;/*Return the new size of the array*/
}