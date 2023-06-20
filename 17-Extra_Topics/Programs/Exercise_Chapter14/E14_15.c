/*E14.15*/
#include<stdio.h>
int wordlength(void);
int main(void)
{
	printf("%d  ",wordlength());
	return 0;
}
int wordlength(void)
{
	unsigned x; 
	int count=0;
	for(x=~0; x!=0; x=x<<1)
		count++;
	return count;
}