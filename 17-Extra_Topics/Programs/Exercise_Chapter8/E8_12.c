/*E8.12*/
#include<stdio.h>
#define N 10
int main(void)
{
	int i,j,a[N]={1};
	for(i=0; i<N; i++)
		for(j=0; j<i; j++)
			a[i]+=a[j];
	for(i=0; i<N; i++)
		printf("%d ",a[i]);
	return 0;
}
