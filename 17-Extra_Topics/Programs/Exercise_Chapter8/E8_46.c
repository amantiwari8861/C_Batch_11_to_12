/*E8.46 Program to find next greater element*/
#include<stdio.h>
#define MAX 50
int main(void)
{
	int i,j,size,arr[MAX],next_ge[MAX];
	printf("Enter size of array :");
	scanf("%d",&size);
   	for(i=0; i<size; i++)
	{	
		scanf("%d",&arr[i]);
		next_ge[i]=-1;
	}	
	
	for(i=0; i<size; i++) 
		for(j=i+1; j<size; j++) 
     		 	if(arr[i] < arr[j]) 
            	{ 
                		next_ge[i] = arr[j]; 
                		break; 
            	}
		
	for(i=0; i<size; i++)
		printf("%d\t",arr[i]);
	printf("\n");
	for(i=0; i<size; i++)
		printf("%d\t",next_ge[i]);
	return 0;
}
