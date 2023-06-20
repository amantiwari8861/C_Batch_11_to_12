/*E13_17*/
#include<stdio.h>
#define MAX 3
int main(void)
{
	printf("Value of MAX is %d\n",MAX);
	#undef MAX
	#ifdef MAX 
		printf("Have a good day");
	#endif	
	return 0;
}