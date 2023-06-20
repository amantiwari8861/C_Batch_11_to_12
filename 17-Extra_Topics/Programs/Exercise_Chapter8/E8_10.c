/*E8.10*/
#include<stdio.h>
#define N  6
int main(void)
{
	int i,j,a[N]={1,2,3,4,5,6};
	for(i=0; i<N; i++)
		for(j=0; j<i; j++)
			a[i]+=a[j];
	for(i=0; i<N; i++)
		printf("%d  ",a[i]);
	return 0;
}
