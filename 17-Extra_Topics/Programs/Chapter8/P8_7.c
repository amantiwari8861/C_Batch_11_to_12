/*P8.7 Program to pass array elements to a function*/
#include<stdio.h>
void check(int num);
int main(void)
{
	int arr[10],i;
	printf("Enter the array elements : ");
	for(i=0; i<10; i++)
	{
		scanf("%d",&arr[i]);
		check(arr[i]);
	}
	return 0;
}
void check(int num)
{
	if(num%2==0)
		printf("%d is even\n",num);
	else
      	printf("%d is odd\n",num);
}