/*E8.14*/
#include<stdio.h>
void func(int arr[],int i, int j);
int main(void)
{
	int arr[10]={1,6,2,7,3,4,8,10,9,5};
	func(arr,2,7);
	return 0;
}
void func(int arr[],int i,int j)
{
	if(i>j)
		return;
    func(arr,i+1,j);
	printf("%d ",arr[i]);
}
