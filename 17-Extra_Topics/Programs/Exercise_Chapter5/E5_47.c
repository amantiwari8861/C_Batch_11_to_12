/*E5_47*/
#include<stdio.h>
int main(void)
{
	int i,n,large;
	printf("Input 10 numbers : \n");
	scanf("%d",&n);
	large=n;
	for(i=2; i<=10; i++)
	{
		scanf("%d",&n);
		if(n > large)
			large=n;
	}
	printf("%d is largest number\n",large);
	return 0;
}
