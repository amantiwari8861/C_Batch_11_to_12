/*E8.18*/
#include<stdio.h>
#define MAX 50
int main(void)
{
	int i,arr[MAX],size,temp;
	printf("Enter size of array : ");
	scanf("%d",&size);
	printf("Enter array : ");
	for(i=0; i<size; i++)
		scanf("%d",&arr[i]);
	for(i=0; i<size-1; i=i+2)
	{
		temp=arr[i];
		arr[i]=arr[i+1];
		arr[i+1]=temp;
	}
	for(i=0; i<size; i++)
		printf("%d  ",arr[i]);
	return 0;
}
