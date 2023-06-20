/*E8.49*/
#include<stdio.h>
#define MAX 50
int main(void)
{
	int i,arr[MAX],temp,size;

	printf("Enter size of array : ");
	scanf("%d",&size);
	for(i=0; i<size; i++)
	{	
		printf("%d : ",i);
		scanf("%d",&arr[i]);
	}	

	for(i=0; i<size; i++)
		printf("%d  ",arr[i]);
	printf("\n");

	temp=arr[0];
	for(i=1; i<size; i++)
		arr[i-1]=arr[i];
	arr[size-1]=temp;			
	for(i=0; i<size; i++)
		printf("%d  ",arr[i]);
	return 0;
}