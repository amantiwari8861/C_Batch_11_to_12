/*E5_50*/
#include<stdio.h>
int main(void)
{
	int n,d,rev;
	printf("Enter a number : ");
	scanf("%d",&n);
	
	rev=0;
	do
	{
		d=n%10;
		n/=10;
		rev=rev*10+d;
	}while(n>0);
	printf("%d %d\n",rev,rev*2);
	return 0;
}