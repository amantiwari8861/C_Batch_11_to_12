/*E8.22*/
#include <stdio.h>
#define MAX 100
int main(void)
{
	int arr[MAX],i,j,temp,n,xchanges;
	printf("Enter the number of elements : ");
	scanf("%d",&n);
	for(i=0; i<n; i++)
	{
		printf("Enter element %d : ",i+1);
		scanf("%d",&arr[i]);
	}
	/*Bubble sort*/
	for(i=0; i<n-1 ;i++)
	{
		xchanges = 0;
		for(j=0; j<n-1-i; j++)
		{
			if(arr[j] > arr[j+1])
			{
				temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp;
				xchanges++;
			}
		}
		if(xchanges==0) /*If list is sorted*/
			break;
	}
	printf("List in Ascending order is :\n");
	for(i=0; i<n; i++)
		printf("%d ",arr[i]);
	printf("\n");

	printf("List in Descending order is :\n");
	for(i=n-1; i>=0; i--)
		printf("%d ",arr[i]);
	printf("\n");
	return 0;
}
