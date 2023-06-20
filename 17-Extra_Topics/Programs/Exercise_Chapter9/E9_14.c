/*E9.14*/
#include<stdio.h>
int main(void)
{
	int arr[4]={10,20,30,40};	
	int x=100, *ptr=arr;
	printf("%p	%d	%d\n",ptr,*ptr,x);
	x=*ptr++;
	printf("%p	%d	%d\n",ptr,*ptr,x);
	x=*++ptr;
	printf("%p	%d	%d\n",ptr,*ptr,x);
	x=++*ptr;
	printf("%p	%d	%d\n",ptr,*ptr,x);
	x=(*ptr)++;
	printf("%p	%d	%d\n",ptr,*ptr,x);
	return 0;
}
      

