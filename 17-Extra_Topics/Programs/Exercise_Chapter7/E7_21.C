/*E7_21 Find Quotient*/
#include<stdio.h>
int quo(int a,int b);
int main(void)
{
	int a,b;
	printf("Enter two numbers :");
	scanf("%d%d",&a,&b);
	printf("%d\n",quo(a,b));
	return 0;
}
int quo(int a,int b)
{
	if(a<b) 
		return 0;
	return 1 + quo(a-b,b);
}
