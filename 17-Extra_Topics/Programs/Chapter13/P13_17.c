/*P13.17 Program to understand the use of #ifdef directive*/
#include<stdio.h>
#define FLAG   
int main(void)
{
	int a=20,b=4;
	#ifdef FLAG
			printf("FLAG is defined\n");
			a++;
			b++;
	#endif
	printf("a=%d,b=%d\n",a,b);
	printf("Program completed\n");
	return 0;
}