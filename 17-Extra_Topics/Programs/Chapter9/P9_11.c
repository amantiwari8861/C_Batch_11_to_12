/*P9.11 Program to understand difference between pointer to an integer and pointer to an array of integers*/
#include<stdio.h>
int main(void)
{
	int *p;			/*Can point to an integer*/
	int (*ptr)[5];  /*Can point to an array of 5 integers*/ 
	int arr[5];
	p=arr;	/*Points to 0th element of arr*/
	ptr=&arr;	/*Points to the whole array arr*/
	printf("p=%p,ptr=%p\n",p,ptr);
	p++;
	ptr++;
	printf("p=%p,ptr=%p\n",p,ptr);
	return 0;
}