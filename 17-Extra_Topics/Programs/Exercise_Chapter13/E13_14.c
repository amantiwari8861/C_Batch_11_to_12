/*E13_14*/
#include<stdio.h>
#define Y 10
int main(void)
{
	#if X || Y && Z
		printf("Sea in Depth\n");
	#else
		printf("See in depth\n");
	#endif
	return 0;
}
