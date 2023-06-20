/*P13.5*/
#include<stdio.h>
#define PROD(x,y)  (x)*(y)
int main(void)
{
	printf("%d\t",PROD(2,4));
	printf("%d\t",PROD(3+4,5+1));    
	printf("%d\n",60/PROD(2,3));     
	return 0;
}