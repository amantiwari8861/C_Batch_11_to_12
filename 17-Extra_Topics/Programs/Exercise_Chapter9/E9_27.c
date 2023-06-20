/*E9.27*/
#include<stdio.h>
void func(int a[]);
int main(void)
{
	int arr[10] = {1,2,3,4,5,6,7,8,9,10};
	func(arr+3);
	return 0;
}
void func(int a[])
{
	int i;
	for(i=0; a[i]!=8; i++)
       	printf("%d ",a[i]);
}                        
