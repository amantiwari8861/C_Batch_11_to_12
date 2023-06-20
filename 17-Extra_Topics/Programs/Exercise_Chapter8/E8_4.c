/*E8.4*/
#include<stdio.h>
void func(int arr[]);
int main(void)
{
	int arr[5]={5,10,15,20,25};
	func(arr);
	return 0;
}
void func(int arr[])
{
	int i=5,sum=0;
	while(i>2)
		sum=sum+arr[--i];
	printf("sum=%d\n",sum);
}