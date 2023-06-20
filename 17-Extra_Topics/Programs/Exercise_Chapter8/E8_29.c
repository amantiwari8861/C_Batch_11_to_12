/*E8.29*/
#include <stdio.h>
#define MAX 50
int main(void)
{
	int i,size,arr[MAX],leader;
	printf("Enter size of array :");
	scanf("%d",&size);

	for(i=0; i<size; i++)
	{	
		printf("%d : ",i);
		scanf("%d",&arr[i]);
	}	
	
	leader=arr[size-1];	/*Last element is a leader*/
	printf("%d ", leader);  
		
	for(i=size-2; i>=0; i--) 
		if(arr[i]>leader) 
		{ 
			/*A new leader is found*/
			leader=arr[i]; 
			printf("%d ",leader);  
		}
	return 0;
}
