/*E7_14 Enter a line of text and Reverse it*/
#include<stdio.h>
void func(void);
int main(void)
{
	printf("Enter text :\n");
	func();
	printf("\n");
	return 0;
}/*End of main()*/
void func(void)
{
	char c;
	if((c=getchar())!='\n')
		func();
	putchar(c);
}