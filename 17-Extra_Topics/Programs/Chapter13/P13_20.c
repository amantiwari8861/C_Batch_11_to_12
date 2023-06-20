/*P13.20 Program to display the values of predefined constants*/
#include<stdio.h>
int main(void)
{
	printf("%s\n",__DATE__);
	printf("%s\n",__TIME__);
	printf("%s\n",__FILE__);
	printf("%d\n",__LINE__);
	return 0;
}