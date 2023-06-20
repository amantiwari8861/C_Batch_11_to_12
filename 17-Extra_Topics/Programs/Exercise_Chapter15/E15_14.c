/*E15.14*/
#include<stdio.h>
int thrice(int i);
int main(void)
{
	const int i=23;
	const int j=thrice(i);
	printf("j=%d\n",j);
	return 0;
}
int thrice(int i)
{
	return 3*i;
}
