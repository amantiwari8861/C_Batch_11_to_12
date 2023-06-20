/*E5_23*/
#include<stdio.h>
int main(void)
{
	int term,i;
	/*(i)*/
	for(term=10; term<=70; term+=10)
		printf("%d ",term);
	printf("\n");

	/*(ii)*/
	for(term=-10; term>=-70; term-=10)
		printf("%d ",term);
	printf("\n");

	/*(iii)*/
	for(term=1; term<=11111; term=term*10+1)
		printf("%d ",term);
	printf("\n");

	/*(iv)*/
	i=0;
	for(term=1; term<=16; i++,term=term+i)
		printf("%d ",term);
	
	/*(v)*/
	printf("\n");
	for(term=10; term>=-5; term-=3)
		printf("%d ",term);
	printf("\n");

	/*(vi)*/
	for(term=1; term<=32; term*=2)
		printf("%d ",term);
	printf("\n");
	return 0;
}
