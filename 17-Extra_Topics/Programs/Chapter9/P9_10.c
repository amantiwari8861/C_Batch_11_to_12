/*P9.10 Program to print the value and address of array elements by subscripting a pointer variable*/
#include<stdio.h>
int main(void)
{
	int arr[5]={5,10,15,20,25};
	int i,*p;
	p=arr;		
	for(i=0; i<5; i++)
	{
		printf("Address of arr[%d]= %p %p %p %p\n",i,&arr[i],arr+i,p+i,&p[i]);
		printf("Value of arr[%d]= %d %d %d %d\n",i,arr[i],*(arr+i),*(p+i),p[i]);
	}
	return 0;
}