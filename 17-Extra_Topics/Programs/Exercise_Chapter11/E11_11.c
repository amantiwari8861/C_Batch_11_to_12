/*E11_11*/
#include<stdio.h>
typedef struct tag{int i; char c;}tag;   
int main(void)
{
	struct tag v1={1,'a'};			
	tag v2={2,'b'};
	printf("%d  %c  %d  %c\n",v1.i,v1.c,v2.i,v2.c);
	return 0;
}