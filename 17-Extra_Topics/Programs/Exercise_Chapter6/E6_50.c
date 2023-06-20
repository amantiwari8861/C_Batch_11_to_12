/*E6.50*/
#include<stdio.h>
int Product(int a,int b);
int Quotient(int a,int b);
int Remainder(int a,int b);
int main(void)
{
	int x,y;
	printf("Enter x and y (y should be non-zero) : ");
	scanf("%d%d",&x,&y);
	printf("Product=%d\n",Product(x,y));
	printf("Quotient=%d\n",Quotient(x,y));
	printf("Remainder=%d\n",Remainder(x,y));
	return 0;
}
int Product(int a, int b)
{
	int i,p=0;
	for(i=1; i<=b; i++)
		p+=a;
	return p;
}
int Quotient(int a, int b)
{
	int q=0;
	while(a>=b)
	{
		a-=b;
		q++;
	}
	return q;
}
int Remainder(int a, int b)
{
	while(a>=b)
		a-=b;
	return a;
}
