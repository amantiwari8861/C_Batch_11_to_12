/*E8.28*/
#include <stdio.h>
#define MAX 50
int main(void)
{
	int i,size,arr[MAX],count;
	
	int max_freq=0;
	int mf_element,element;
	
	printf("Enter the number of elements : ");
	scanf("%d",&size);
	printf("Enter the elements in sorted order : \n");
	for(i=0; i<size; i++)
		scanf("%d",&arr[i]);
	
	mf_element=arr[0];
	max_freq=0;
	
	i=0;
	while(i<=size-1)
	{
			element=arr[i];
			count=0;	
			while(arr[i]==element && i<size)
			{
				count++;
				i++;
			}
			if(count > max_freq)
			{
				mf_element=element;
				max_freq=count;
			}
	}
	printf("%d occurs %d times\n", mf_element,max_freq);
	return 0;
}
