/*P5.5 Program to find biggest number from three given numbers*/
#include<stdio.h>
int main(void)
{
	int a,b,c,big;
	printf("Enter three numbers : ");
	scanf("%d%d%d", &a, &b, &c);
	if(a>b)
	{
		if(a>c)
			big=a;
		else
			big=c;
	}
	else
	{
		if(b>c)
			big=b;
		else
			big=c;
	}
	printf("Biggest number is %d\n",big);
	return 0;
}/*End of main()*/
