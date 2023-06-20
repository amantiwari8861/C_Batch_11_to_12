/*P8.21*/
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
	
	xchanges=0;
	for(j=0; j<n-1; j++)
	{
		if(arr[j] > arr[j+1])
		{
			temp = arr[j];
			arr[j] = arr[j+1];
			arr[j+1] = temp;
			xchanges++;
		}
	}
	
	for(i=0; i<n; i++)
		printf("%d ",arr[i]);
	printf("\nTotal exchanges = %d ",xchanges);
	return 0;
}
