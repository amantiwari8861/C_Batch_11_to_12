/*E8.26*/
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
	int i,k,n_dup;
	for(i=0; i<size; i++)
	{
		if(arr[i]==arr[i+1])
		{
			k=i+1;
			while(k<size && arr[k]==arr[k+1])
				k++;
			/*Duplicates of arr[i] start at i+1 and end at k*/
			n_dup=k-i;	/*Number of duplictaes of arr[i]*/
			for(k=i+1; k<size; k++)
				arr[k]=arr[k+n_dup];
			size=size-n_dup;
		}
	}	
	return size;/*Return the new size of the array*/
}
