/*E5_52*/
#include<stdio.h>
#include<math.h>
int main(void)
{
	int num,n,d,rev;

	for(n=1000; n<=9999; n++)
	{
        num=n;	rev=0;
		do
		{
			d=num%10;
			num/=10;
			rev=rev*10+d;
		}while(num>0);
		if(n==rev)
			printf("%d\t",n);
	}
	return 0;
}
