/*E4.5*/
#include<stdio.h>
int main(void)
{
	int a=5, b=5;
	printf("%d,%d\t",++a,b--);
	printf("%d,%d\t",a,b);
	printf("%d,%d\t",++a,b++);
	printf("%d,%d\n",a,b);
	return 0;
}