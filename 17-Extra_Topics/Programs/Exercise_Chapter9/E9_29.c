/*E9.29*/
#include<stdio.h>
int main(void)
{
	int i,arr[3][4] = {{10,11,12,13},{20,21,22,23},{30,31,32,33}};
	int *pa[3];
	int (*p)[4];
	p=arr;
	for(i=0; i<3; i++)
		pa[i]=arr[i];
	printf("%d %d %d\n",pa[0][0],pa[0][1],pa[2][3]);
	printf("%d %d %d\n",p[0][0],p[0][1],p[2][3]);
	return 0;
}