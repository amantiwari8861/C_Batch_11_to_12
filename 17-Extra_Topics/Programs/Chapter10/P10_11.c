/*P10.11 Program to print the strings of the two-dimensional character array*/
#include<stdio.h>
#define N 5
#define LEN 10
int main(void)
{
	char arr[N][LEN]={
						"white", 
						"red", 
						"green", 
						"yellow", 
						"blue"
					};
	int i;
	for(i=0; i<N; i++)
	{
		printf("String=%s\t",arr[i]);
		printf("Address of string=%p\n",arr[i]);
	}
	return 0;
}