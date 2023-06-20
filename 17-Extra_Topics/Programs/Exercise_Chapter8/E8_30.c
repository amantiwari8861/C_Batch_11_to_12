/*E8.30*/
#include <stdio.h>
#define MAX 50
int LastOcc(int arr[],int size,int item);
int firstOcc(int arr[],int size,int item);
int main(void)
{
	int i,size,item,arr[MAX],index;
	printf("Enter the number of elements : ");
	scanf("%d",&size);
	printf("Enter the elements(in sorted order) : \n");

	for(i=0; i<size; i++)
		scanf("%d",&arr[i]);
	printf("Enter the item to be searched : ");
	scanf("%d",&item);

	index=firstOcc(arr,size,item);
	if(index==-1)
		printf("%d not found in array\n",item);
	else
	{
		printf("First occurence of %d is at position %d\n",item,index);
		index=LastOcc(arr,size,item);
		printf("Last occurence of %d is at position %d\n",item,index);
	}
	return 0;
}

int firstOcc(int arr[],int size,int item)
{
	int low=0,up=size-1,mid;
	if(arr[0]==item)
		return 0;
	while(low<=up)
	{
		mid=(low+up)/2;
		if(arr[mid-1]<item && arr[mid]==item)
			return mid;
		if(item>arr[mid])
			low=mid+1;	/*Search in right half*/
		else if(item<=arr[mid]) /*if equal we'll search in left half*/
			up=mid-1;	/*Search in left half*/
	}
	return -1;
}

int LastOcc(int arr[],int size,int item)
{
	int low=0,up=size-1,mid;
	if(arr[size-1]==item)
		return size-1;
	while(low<=up)
	{
		mid=(low+up)/2;
		if(arr[mid+1]>item && arr[mid]==item)
			return mid;
		if(item>=arr[mid])/*if equal we'll search in right half */
			low=mid+1;	/*Search in right half */
		else if(item < arr[mid]) 
			up=mid-1;	/*Search in left half */
	}
	return -1;
}