/*P5.20 Find the sum of this series upto n terms 
  1 + 2 + 4 + 7 + 11 + 16 + …………*/
#include<stdio.h>
int main(void)
{
	int i,n,sum=0,term=1;
	printf("Enter number of terms : ");
	scanf("%d",&n);
	for(i=1; i<=n; i++)
	{
		sum+=term;
		term=term+i;
	}
	printf("The sum of series upto %d terms is %d\n",n,sum);
	return 0;
}