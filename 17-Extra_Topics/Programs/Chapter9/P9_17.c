/*P9.17 Program to explain call by reference*/
#include<stdio.h>
void ref(int *p,int *q);
int main(void)
{
	int a=5,b=8;
	printf("a=%d,b=%d\n",a,b);
	ref(&a,&b);
	printf("a=%d,b=%d\n",a,b);
	return 0;
}
void ref(int *p,int *q)
{
	(*p)++;
	(*q)++;
	printf("*p=%d, *q=%d\n",*p,*q);
}
