/*E13_5*/
#include<stdio.h>
#define NEW_LINE  printf("\n");
#define BLANK_LINES(n) { int i; for(i=0; i<n; i++) printf("\n"); }
int main(void)
{
	printf("When you have a chance");
	NEW_LINE
	printf("to embrace an opportunity");
	BLANK_LINES(3)
	printf("Give it a big hug");
	NEW_LINE
	return 0;
}