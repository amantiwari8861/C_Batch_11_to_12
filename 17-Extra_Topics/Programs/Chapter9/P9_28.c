/*P9.28 Program to understand dynamic allocation of memory*/
#include<stdio.h>
#include<stdlib.h>
int main(void)
{
	int *p,n,i;
	printf("Enter the number of integers to be entered : ");
	scanf("%d",&n);
	p = (int *)malloc(n*sizeof(int)); 
	if(p==NULL)
	{
		printf("Memory not available\n");
		exit(1);
	}
	for(i=0; i<n; i++)
	{
		printf("Enter an integer : ");
		scanf("%d",p+i);
	}
	for(i=0; i<n; i++)
		printf("%d\t",*(p+i));
	return 0;
}