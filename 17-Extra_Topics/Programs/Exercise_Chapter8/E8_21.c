/*E8.21 Reverse first elements of an array*/
#include <stdio.h>
#define MAX 50
int main(void)
{
	int i,arr[MAX],size,j,n,temp;
	printf("Enter size of array : ");
	scanf("%d",&size);
	printf("Enter array : ");
	for(i=0; i<size; i++)
		scanf("%d",&arr[i]);
	printf("Enter n : ");
	scanf("%d",&n);
	
	for(i=0,j=n-1; i<j; i++,j--)
	{
		temp=arr[i];
		arr[i]=arr[j];
		arr[j]=temp;
	}
	for(i=0; i<size; i++)
		printf("%d  ",arr[i]);
	return 0;
}