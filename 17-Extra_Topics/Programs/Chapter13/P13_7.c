/*P13.7*/
#include<stdio.h>
int square(int x)
{
 	return x*x;
}
int main(void)
{
	int k=5,s;
	s=square(k++);
	printf("s=%d,k=%d\n",s,k);
	return 0;
}