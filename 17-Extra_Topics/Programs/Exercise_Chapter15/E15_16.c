/*E15.16*/
#include<stdio.h>
#include<stdlib.h>
int *func(int *psize);
int main(void)
{
	int i,size;
	const int *arr=func(&size);
	for(i=0; i<size; i++)
	{
		printf("Enter a[%d] : ", i);
		scanf("%d",&arr[i]);
	}
	for(i=0; i<size; i++)
		printf("%d\t",arr[i]);
	return 0;
}
int *func(int *psize)
{
	int *p;
	printf("Enter size : ");
	scanf("%d",psize);
	p =(int *) malloc(*psize * sizeof(int));
	return p;
}