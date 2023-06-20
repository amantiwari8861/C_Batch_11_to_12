/*E6.33*/
#include<stdio.h>
int abs(int a);
int abs1(int a);
int main(void)
{	
	int a;
	printf("Enter a : ");
	scanf("%d",&a);
	printf("%d  ",abs(a));
	printf("%d  ",abs1(a));
	return 0;
}
int abs(int a)
{
	if(a<0)
		return -a;
	else
		return a;
}
int abs1(int a)
{
	if(a<0)
		a=-a;
	return a;
}

