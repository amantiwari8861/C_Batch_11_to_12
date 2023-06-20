/*E8.47*/
#include<stdio.h>
#define MAX 50
int main(void)
{
	int i,j,n,arr[MAX],min,temp;
	int k=3;

	printf("Enter size of array :");
	scanf("%d",&n);

	for(i=0; i<n; i++)
	{	
		printf("%d : ",i);
		scanf("%d",&arr[i]);
	}	

    for(i=0; i<k; i++)/*Selection sort upto k only*/
	{
		min=i;
		for(j=i+1; j<n; j++)
		{
			if(arr[min] > arr[j])
				min=j ;
		}
		if(i!=min)
		{
			temp=arr[i];
			arr[i]=arr[min];
			arr[min]=temp;
		}
	}
	printf("kth smallest element is %d\n",arr[k-1]);
	return 0;
}
