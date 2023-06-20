/*E5_51*/
#include<stdio.h>
#include<math.h>
int main(void)
{
	int num,n,d,rev;

	printf("Enter a number : ");
	scanf("%d",&n);
	
	num=n;	rev=0;
	do
	{
		d=num%10;
		num/=10;
		rev=rev*10+d;
	}while(num>0);
	if(n==rev)
		printf("%d is a palindrome\n",n);
	else
		printf("%d is not a palindrome\n",n);
	return 0;
}