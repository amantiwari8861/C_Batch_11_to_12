/*P13.19 Program to understand the use of #ifndef directive*/
#include<stdio.h>
int main(void)
{
	int a=20,b=4;
	#ifndef MAX
		printf("MAX is not defined\n");
		a--;
		b--;
	#endif
	printf("a=%d,b=%d\n",a,b);
	printf("Program completed\n");
	return 0;
}
