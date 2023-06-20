/*P8.6 Program to convert a decimal number to binary number*/
#include<stdio.h>
int main(void)
{
	int num,arr[15],i,j;
	printf("Enter a decimal number : ");
	scanf("%d",&num);
	i=0;
	while(num>0)
	{
		arr[i] = num%2;	/*store the remainder in array*/
		num/=2;
		i++;
	}
	printf("Binary number is : ");
	for(j=i-1; j>=0; j--)     /*print the array backwards*/
		printf("%d",arr[j]);
	printf("\n");
	return 0;
}