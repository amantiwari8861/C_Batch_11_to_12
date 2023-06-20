/*P15.8 Program to find out sum of integers*/
#include<stdio.h>
#include<stdarg.h>
int sum(int,...);
int main(void)
{
	printf("Total = %d\n",sum(2,99,68));
	printf("Total = %d\n",sum(3,11,79,32));
	printf("Total = %d\n",sum(5,23,34,45,56,78));
	return 0;
}
int sum(int num,...)
{
	int i;
	va_list ap;			
	int arg,total=0;
	va_start(ap,num);
	for(i=0; i<num; i++)
	{
		arg = va_arg(ap,int);
		printf("%d ",arg);
		total+=arg;
	}
	va_end(ap);
	return total;
}