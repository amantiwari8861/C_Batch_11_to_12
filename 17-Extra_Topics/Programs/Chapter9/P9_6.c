/*P9.6 Pointer to pointer*/
#include<stdio.h>
int main(void)
{
	int a=5;
	int *pa;
	int **ppa;
	pa = &a;
	ppa = &pa;
	printf("Address of a=%p\n",&a);
	printf("Value of pa=Address of a=%p\n",pa);
	printf("Value of *pa=Value of a=%d\n",*pa);
	printf("Address of pa=%p\n",&pa);
	printf("Value of ppa=Address of pa=%p\n",ppa);
	printf("Value of *ppa=Value of pa=%p\n",*ppa);
	printf("Value of **ppa=Value of a=%d\n",**ppa);
	printf("Address of ppa=%p\n",&ppa);
	return 0;
}