/*E8.11*/
#include<stdio.h>
#define N 6
int main(void)
{
	int i,j,a[N]={1,2,3,4,5,6};
	
	for(i=0; i<N; i++)
		for(j=i+1; j<N; j++)
			a[i]+=a[j];
	
	for(i=0; i<N; i++)
		printf("%d ",a[i]);
	return 0;
}