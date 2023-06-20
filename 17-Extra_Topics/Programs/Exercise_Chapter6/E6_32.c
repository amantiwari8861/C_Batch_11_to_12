/*E6.32*/
#include<stdio.h>
int func(int x,int b);
int func1(int x,int b);
int main(void)
{
	int x,b;
	printf("Enter x and b : ");
	scanf("%d%d",&x,&b);
	printf("%d ",func(x,b));
	printf("%d ",func1(x,b));
	return 0;
}
int func(int x,int b)
{
	if(x==5)
		return b+2;
	else if(x>5)
		return b+10;
	else
		return b;
}
int func1(int x,int b)
{
	if(x==5)
		b+=2;
	else if(x>5)
		b+=10;
	return b;
}
