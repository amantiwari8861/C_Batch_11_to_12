/*E14.17*/
#include<stdio.h>
int isMultiple(int x,int n); 
int main(void)
{
	int x,i;
	printf("Enter x and i : ");
	scanf("%d%d",&x,&i);
	if(isMultiple(x,i) )
		printf("%d is multiple of 2 to the power of %d\n",x,i);
	else
		printf("%d is not multiple of 2 to the power of %d\n",x,i);
	return 0;
}
int isMultiple(int x,int i)
{
	return !(x & (~(~0<<i)));
}
