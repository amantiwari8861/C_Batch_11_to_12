/*E9.9*/
#include<stdio.h>
int main(void)
{
	int i,arr[5]={25,40,55,70,85},*p=arr;
	for(i=0; i<8; i++)
		printf("%d ",++*p);
	printf("\n");
	for(i=0; i<7; i++)
		printf("%d ",(*p)++);
	printf("\n");
	return 0;
}