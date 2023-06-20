/*E8.20 Find largest and second largest element in an array */
#include <stdio.h>
#include<limits.h>
#include<stdlib.h>
#define MAX 50
int main(void)
{
	int i,arr[MAX],size,max,smax;
	printf("Enter size of array : ");
	scanf("%d",&size);
	printf("Enter array : ");
	for(i=0; i<size; i++)
		scanf("%d",&arr[i]);
	if(size<2)
	{
		printf("There should be at least two elements\n");
		exit(1);
	}
	
	max=smax=INT_MIN;  /*Include limits.h for INT_MIN*/
	for(i=0; i<size; i++)
		if(arr[i] > max) 	
		{
			smax=max; 
			max=arr[i];
			
		}/*If arr[i] is less than max but greater than smax, change only smax*/
		else if(arr[i] > smax)
			smax = arr[i];		
			
	printf("Largest=%d, Second Largest=%d\n",max,smax);
	return 0;
}