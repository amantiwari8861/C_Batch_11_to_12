/*E7_13 Input and add n numbers*/
#include<stdio.h>
int	InputAndAdd(int n);
int main(void)
{
	int n;
	printf("Enter n :");
	scanf("%d",&n);
	printf("%d\n",InputAndAdd(n));
	return 0;
}
int	InputAndAdd(int n)
{
	int a;
	printf("Enter a number : ");      
    scanf("%d",&a);
	if(n==1)
	    return a;
	return a + InputAndAdd(n-1);
}