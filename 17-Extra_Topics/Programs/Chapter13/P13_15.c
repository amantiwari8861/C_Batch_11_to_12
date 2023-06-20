/*P13.15 Program to understand the use of #else directive*/
#include<stdio.h>
#define FLAG  8
int main(void)
{
	int a=20,b=4;
	#if  FLAG>=3
		printf("Value of FLAG is greater than or equal to 3\n");    
		a=a+b;
		b=a*b;	
	#else
		printf("Value of FLAG is less than 3\n");    
		a=a-b;
		b=a/b;	
	#endif
	printf("a=%d,b=%d\n",a,b);
	printf("Program completed\n"); 
	return 0;
}
