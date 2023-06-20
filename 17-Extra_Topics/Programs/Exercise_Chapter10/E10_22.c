/*E10.22*/
#include<stdio.h>
int main(void)
{
	char *str="Deepali Srivastava";
	int i=0;
	while(str[++i]);
	printf("%d\n",i);
	return 0;
}