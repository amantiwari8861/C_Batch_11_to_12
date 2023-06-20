/*P14.14  Swapping values without using a temporary variable through bitwise XOR*/
#include<stdio.h>
int main(void)
{
	int x,y;
	printf("Enter values for x and y : ");
	scanf("%d%d",&x,&y);
	printf("x=%d,y=%d\n",x,y);
	x=x^y;
	y=x^y;
	x=x^y;
	printf("x=%d,y=%d\n",x,y);
	return 0;
}
