/*E9.31*/
#include<stdio.h>
int main(void)
{
	int i,arr[3][4]={ {10,11,12,13},{20,21,22,23},{30,31,32,33}};
	int *p=&arr[0][0];
	for(i=0; i<12; i++)
		printf("%d ",p[i]);
	printf("\n");
	return 0;
}