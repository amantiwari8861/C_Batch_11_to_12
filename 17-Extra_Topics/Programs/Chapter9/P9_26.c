/*P9.26 Dereferencing a void pointer*/
#include<stdio.h>
int main(void)
{
	int a=3;
	float b=3.4,*fp=&b;
	void *vp;
	vp=&a;
	printf("Value of a = %d\n",*(int *)vp);
	*(int *)vp = 12;
	printf("Value of a = %d\n",*(int *)vp);
	vp=fp;
	printf("Value of b = %f\n",*(float *)vp);
	return 0;
}
