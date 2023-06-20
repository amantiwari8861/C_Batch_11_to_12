/*P9.20 Passing 1-D array to a function*/
#include<stdio.h>
void func(int a[]);
int main(void)
{
	int i,arr[5]={3,6,2,7,1};
	func(arr);
	printf("Inside main(): ");
	for(i=0; i<5; i++)
	       printf("%d  ",arr[i]);
	printf("\n");
	return 0;
}

void func(int a[])
{
	int i;
	printf("Inside func(): ");
	for(i=0; i<5; i++)
	{
		a[i]=a[i]+2;
		printf("%d  ",a[i]);
	}
	printf("\n");
}
