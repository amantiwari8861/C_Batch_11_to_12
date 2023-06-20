/*P15.10 Program in which the variable length list is passed to another function */
#include<stdio.h>
#include<stdarg.h>
int sum(int, ...);
void display(int,va_list);
int main(void)
{
	printf("Total= %d\n",sum(2,99,68));
	printf("Total =%d\n",sum(3,11,79,32));
	printf("Total= %d\n",sum(5,23,34,45,56,78));
	return 0;
}
int sum(int num, ...)
{
	int i;
	va_list ap;
	int arg,total = 0;
	va_start(ap,num);
	display(num,ap);
	for(i=0; i<num; i++)
	{
		arg=va_arg(ap,int);
		total+=arg;
	}
	va_end(ap);
	return total;
}
void display(int num,va_list ap)
{
	int i,arg;
	for(i=0; i<num; i++)
	{
		arg=va_arg(ap,int);
		printf("%d ",arg);
	}
}