/*E7_20 Find remainder*/
#include<stdio.h>
int rem(int a,int b);
int main(void)
{
	int a,b;
	printf("Enter two numbers :");
	scanf("%d%d",&a,&b);
	printf("%d\n",rem(a,b));
	return 0;
}
int rem(int a,int b)
{
	if(a<b) 
		return a;
	return rem(a-b,b);
}