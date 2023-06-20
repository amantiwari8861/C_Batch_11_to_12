/*P9.21 Program to verify the fact that when an array is passed to a function, the receiving arameter is declared as a pointer */
#include<stdio.h>
void func(double f[],int *i,char c[5]);
int main(void)
{
	double d_arr[5]={1.4,2.5,3.7,4.1,5.9};
	int i_arr[5]={1,2,3,4,5};
	char c_arr[5]={'a','b','c','d','e'};
	printf("Inside main() : ");
	printf("sizeof(d_arr)=%u\t",sizeof(d_arr));
	printf("sizeof(i_arr)=%u\t",sizeof(i_arr));
	printf("sizeof(c_arr)=%u\n",sizeof(c_arr));
	printf("%p  %p  %p\n",d_arr,i_arr,c_arr);
	func(d_arr,i_arr,c_arr);
	return 0;
}     
void func(double d[],int *i,char c[5])
{
	printf("Inside func() : ");
	printf("sizeof(d)=%u\t",sizeof(d)); 
	printf("sizeof(i)=%u\t",sizeof(i));
	printf("sizeof(c)=%u\n",sizeof(c));
	printf("%p  %p  %p\n",d,i,c);
}