/*E5_54*/
#include<stdio.h>
int main(void)
{
	int n,count=0,dig,d;
	
	printf("Enter a number : ");
	scanf("%d",&n);
	printf("Enter a digit : ");
	scanf("%d",&dig);
	
	do
	{
		d=n%10;
		n/=10;
		if(d==dig)
			count++;
	}while(n>0);
	printf("%d\n",count);
	return 0;
}