/*E8.40*/
#include<stdio.h>
void reverse(int arr[],int low,int high);
int main(void)
{
	int i,arr[6]={1,2,3,4,8,10};
	reverse(arr,0,5);
	for(i=0; i<=5; i++)
		printf("%d ",arr[i]);
	return 0;
}
void reverse(int arr[],int low,int high)
{
	int tmp; 
	if(low>=high)
		 return;
	tmp=arr[low];
	arr[low]=arr[high];
	arr[high]=tmp;
	reverse(arr,low+1,high-1);
}