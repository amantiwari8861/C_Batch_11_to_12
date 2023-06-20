/*P5.39 Program to multiply two numbers by russian peasant method*/
#include<stdio.h>
int main(void)
{
	int a,b,x,y,s=0;
	printf("Enter two numbers to be multiplied : ");
	scanf("%d%d",&x,&y);
	a = x;
	b = y;
	while(a>=1)			/*Loop till first number reduces to 1*/ 
	{
		if(a%2!=0)		/*If first number is odd*/
			s=s+b;		/*Add second number to s*/
		a/=2;			/*Divide first number by 2*/	
		b*=2;			/*Multiply second number by 2*/
	}
	printf("%d * %d = %d\n",x,y,s);
	return 0;
}