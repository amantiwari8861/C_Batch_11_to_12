/*P13.10*/
#include<stdio.h>
#define MACRO(x)  if(x==0)  printf("Out for a Duck\n")
int main(void)
{
	int runs=12;
	if(runs<100 )
		MACRO(runs);
	else
		printf("Scored a century\n");
	return 0;
}
