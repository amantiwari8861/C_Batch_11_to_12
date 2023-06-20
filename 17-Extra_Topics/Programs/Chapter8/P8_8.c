/*P8.8 Program to understand the effect of passing an array to a function*/   
#include<stdio.h>
void func(int val[]);
int main(void)
{
	int i,arr[6]={1,2,3,4,5,6};
	func(arr);
	printf("Contents of array are : ");
	for(i=0; i<6; i++)
		printf("%d ",arr[i]);
	printf("\n");
	return 0;
}
void func(int val[])
{
	int sum=0,i;
	for(i=0; i<6; i++)
	{
		val[i]=val[i]*val[i];
		sum+=val[i];
	}
	printf("Sum of squares=%d\n",sum);
}