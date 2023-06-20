/*E8.45*/
#include<stdio.h>
#define MAX 50
void partition(int a[],int size);
int main(void)
{
	int i,arr[MAX],size;
	printf("Enter size of array :");
	scanf("%d",&size);
	for(i=0; i<size; i++)
	{	
		printf("%d : ",i);
		scanf("%d",&arr[i]);
	}	
	partition(arr,size);
	for(i=0; i<size; i++)
		printf("%d ",arr[i]);
	return 0;
}
void partition(int a[],int size)
{
	int i=0,j=size-1,temp;
	while(i<j)
	{
		while(a[i]<0 && i<j) /*Move right*/
			i++;
		while(a[j]>=0 && i<j) /*Move left*/
			j--;
		if(i<j) 
		{
			temp=a[i];
			a[i]=a[j];
			a[j]=temp;
			i++; j--;
		}
	}
}