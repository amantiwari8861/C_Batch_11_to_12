/*E9.16*/                
#include<stdio.h>
int main(void)
{
	int  arr[8]={11,22,33,44,55,66,77,88};                                                                                
	int *p,*q;
	q=arr/2;
	p=q*2;
	printf("%d %d",*p,*q);
	return 0;
}

                                                                              
