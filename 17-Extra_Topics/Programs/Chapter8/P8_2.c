/*P8.2 Program to add elements of an array*/
#include<stdio.h>
int main(void)
{
	int arr[10],i,sum=0;
	for(i=0; i<10; i++)
	{
		printf("Enter a value for arr[%d] : ",i);
		scanf("%d",&arr[i]);
		sum+=arr[i];
	}
	printf("Sum=%d\n",sum);
	return 0;
}