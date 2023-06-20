/*P13.2 Program to understand macros with arguments*/
#include<stdio.h>
#define SUM(x,y) ((x)+(y))
#define PROD(x,y) ((x)*(y))
int main(void)
{
	int l,m,i,j,a=5,b=3;
	float p,q;
	l=SUM(a,b);
	m=PROD(a,b);
	i=SUM(4,6);
	j=PROD(4,6);
	p=SUM(2.2,3.4);
	q=PROD(2.2,3.4);
	printf("l=%d, m=%d, i=%d, j=%d, p=%.1f, q=%.1f\n",l,m,i,j,p,q);
	return 0;
}