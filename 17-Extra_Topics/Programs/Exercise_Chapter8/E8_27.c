/*E8.27*/
#include <stdio.h>
#define MAX 50
int main(void)
{
	int i,j,n,arr[MAX],inv=0;
	printf("Enter size of array : ");
	scanf("%d",&n);
	for(i=0; i<n; i++)
	{	
		printf("%d : ",i);
		scanf("%d",&arr[i]);
	}	
	for(i=0; i<n-1; i++) 
		for(j=i+1; j<n; j++) 
			if(arr[i] > arr[j]) 
				inv++; 
	printf("Total inversions in the array : %d\n",inv);
	return 0;
}