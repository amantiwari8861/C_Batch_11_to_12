/*E9.5*/
#include<stdio.h>
int main(void)
{
	int i,arr[5]= {25,30,35,40,45},*p;
	p=&arr[4];
	for(i=0; i<5; i++)
		printf("%d\t%d\t",*(p-i),p[-i]);
	return 0;
}