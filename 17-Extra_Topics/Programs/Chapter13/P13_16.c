/*P13.16 Program to understand the use of #elif directive*/
#include<stdio.h>  
#define FLAG 1
int main(void)
{
	int a=20,b=4;
	#if FLAG==0
			printf("Value of FLAG is is zero\n");
			a++;
			b++;
	#elif FLAG==1
			printf("Value of FLAG is one\n");
			a--;
			b--;
	#elif FLAG==2
		    printf("Value of FLAG is two\n");
			a=a-3;
			b=b-3;
	#else
			printf("Value of FLAG is greater than two or less than zero\n");
			a=a+b;
			b=a-b;
	#endif
	printf("a=%d,b=%d\n",a,b);
	printf("Program completed\n");
	return 0;
}