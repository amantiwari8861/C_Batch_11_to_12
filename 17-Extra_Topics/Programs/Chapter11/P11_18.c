/*P11.18 Program to understand the difference between #define and typedef*/ 
#include<stdio.h>
#define dp double *
int main(void)
{
	dp p1, p2, p3;
	typedef double *dptr;
	dptr ptr1, ptr2, ptr3;
	printf("%u  %u  %u\n", sizeof(p1), sizeof(p2), sizeof(p3) );
	printf("%u  %u  %u\n", sizeof(ptr1), sizeof(ptr2), sizeof(ptr3) );
	return 0;
}