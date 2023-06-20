/*E8.23*/
#include <stdio.h>
#define MAX 100
void selection(int arr[], int n);
void bubble(int arr[], int n);
void insertion(int arr[], int n);
int main(void)
{
	int i,n=10;
	int arr1[MAX]={4,5,7,9,8,3,1,5,6,2};
	int arr2[MAX]={4,5,7,9,8,3,1,5,6,2};
	int arr3[MAX]={4,5,7,9,8,3,1,5,6,2};

	selection(arr1,n);
	bubble(arr2,n);
	insertion(arr3,n);

	for(i=0; i<n; i++)
		printf("%d ",arr1[i]);
	printf("\n");
	
	for(i=0; i<n; i++)
		printf("%d ",arr2[i]);
	printf("\n");
	
	for(i=0; i<n; i++)
		printf("%d ",arr3[i]);
	printf("\n");
	return 0;
}/*End of main()*/

void selection(int arr[],int n)
{
	int i,j,max,temp;
	for(i=0; i<n-1; i++)
	{
		max = i;
		for(j=i+1; j<n; j++)
		{
			if(arr[max] < arr[j])
				max = j ;
		}
		if(i!=max)
		{
			temp = arr[i];
			arr[i] = arr[max];
			arr[max] = temp ;
		}
	}
}

void bubble(int arr[],int n)
{
	int i,j,xchanges,temp;
	for(i=0; i<n-1; i++)
	{
		xchanges = 0;
		for(j=0; j<n-1-i; j++)
		{
			if(arr[j] < arr[j+1])
			{
				temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp;
				xchanges++;
			}
		}
		if(xchanges==0) /*If list is sorted*/
			break;
	}

}

void insertion(int arr[],int n)
{
	int i,j,k;
	for(i=1; i<n; i++)
	{
		k=arr[i]; 
		for(j=i-1; j>=0 && k>arr[j]; j--)
			arr[j+1]=arr[j];
		arr[j+1]=k;
	}
}