/*E6.1*/
#include<stdio.h>
void func(void);
int main(void)
{
	printf("Lucknow\n");
	goto ab; 
	return 0;
}
void func(void)
{
	ab:
	printf("Bareilly\n");
}