/*E4.24*/
#include<stdio.h>
int main(void)
{
	int x,y;
	printf("Enter two numbers : ");
	scanf("%d%d",&x,&y);
	x>y ? printf("%d\n",x-y): printf("%d\n",x+y); 
	return 0;
}