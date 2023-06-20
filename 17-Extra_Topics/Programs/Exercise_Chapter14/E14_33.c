/*E14.33*/
#include<stdio.h>
void swap(int *a,int *b);
void swap1(int *a,int *b);
int main(void)
{
	int x=2,y=2;
	int arr[5]={1,2,5,3,4},i,j,n=5,min;
	for(i=0; i<n-1; i++)
	{
		min=i;
		for(j=i+1; j<n; j++)
		{
			if(arr[min]>arr[j])
				min=j ;
		}
		swap(&arr[i],&arr[min]);
		/*swap1(&arr[i],&arr[min]);*/
	}
	printf("Sorted list is : \n");
	for(i=0; i<n; i++)
		printf("%d ",arr[i]);
	printf("\n");
	return 0;
}
void swap(int *a,int *b)
{
	int temp; 
	temp=*a;
	*a=*b;
	*b=temp;
}
void swap1(int *x,int *y)
{
	*x = *x ^ *y;
	*y = *x ^ *y;
	*x = *x ^ *y;
}
