/*E6.40*/
#include<stdio.h>
void mult_table(num);
int main(void)
{
	int num;
	printf("Enter a number : ");
	scanf("%d",&num);
	mult_table(num);
	return 0;		
}
void mult_table(num)
{
	int i;
	for(i=1; i<=10; i++)
		printf("%2d x %2d = %3d\n", num, i, num*i);
}