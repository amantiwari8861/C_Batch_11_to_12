/*E14.29*/
#include<stdio.h>
#include<math.h>
unsigned func(unsigned int n);
unsigned func1(unsigned int n);
int main(void)
{
	unsigned x=8;
    printf("%d %d\n",func(x), func1(x));
	x=35;
	printf("%d %d\n",func(x), func1(x));
	return 0;
}
unsigned func(unsigned int n)
{
	int count=0;
	while(n!=0)
	{
		n>>=1;
		count++;
	}       
 	return count-1;
}
unsigned func1(unsigned int n)
{
 	return log(n)/log(2);
}
