/*E8.17*/
#include<stdio.h>
int func(int arr[],int low,int high);
int main(void)
{
	int arr[10]={3,4,2,11,8,10};
	printf("%d\n",func(arr,0,5));
	return 0;
}
int func(int arr[],int low,int high)
{
	int mid,left,right;
	if(low==high)
		return arr[low];
    mid=(low+high)/2;
	left=func(arr,low,mid);
	right=func(arr,mid+1,high);
    if(left<right)
		return left;
	else
		return right;
}