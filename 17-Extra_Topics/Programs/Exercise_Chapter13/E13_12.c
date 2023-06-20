/*E13_12*/
#include<stdio.h>
#define INC(dtype,x,i) x=x+i  
int main(void)
{
	int arr[5]={20,34,56,12,96},*ptr=arr;
	INC(int,arr[2],3);
	INC(int*,ptr,2);
	printf("*ptr=%d\n",*ptr);
	return 0;
}
