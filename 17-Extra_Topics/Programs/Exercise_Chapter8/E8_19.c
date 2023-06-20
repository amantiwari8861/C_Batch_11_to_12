/*E8.19*/
#include <stdio.h>
#define MAX 50
int main(void)
{
	int i,arr[MAX],size,max,min;
	printf("Enter size of array : ");
	scanf("%d",&size);
	printf("Enter array : ");
	for(i=0; i<size; i++)
		scanf("%d",&arr[i]);
	max=min=arr[0];
	for(i=0; i<size; i++)
	{
		if(arr[i]>max)
			max=arr[i];
		if(arr[i]<min)
			min=arr[i];
	}
	printf("%d  %d  %d\n",max,min,max-min);
	return 0;
}