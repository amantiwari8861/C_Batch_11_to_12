/*E13_16*/
#include<stdio.h>
#define DIFF(FNAME, DTYPE, RTYPE)  	\
RTYPE FNAME(DTYPE X, DTYPE Y){ return  X-Y;}
DIFF(diff_int, int, int)
DIFF(diff_iptr, int*, int)
DIFF(diff_float, float, float);
DIFF(diff_fptr, float*, int);
int main(void)
{
	int iarr[5] = {1,2,3,4,5},a,p,q;
	float farr[7] = {1.2,2.3,3.4,4.5,5.6,6.7,7.8},b;
	a = diff_int(iarr[4],iarr[1]);
	b = diff_float(farr[6],farr[2]);
	p = diff_iptr(&iarr[4],&iarr[1]);
	q = diff_fptr(&farr[4],&farr[1]);
	printf("a=%d, b=%.1f, p=%d, q=%d\n",a,b,p,q);
	return 0;
}