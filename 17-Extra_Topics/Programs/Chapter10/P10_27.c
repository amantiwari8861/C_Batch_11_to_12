/*P10.27 Program to convert strings to integer and float values*/
#include<stdio.h>
int main(void)
{
	char str1[10] = "1348";
	char str2[10] = "234.56";
	int x;
	float y;
	sscanf(str1,"%d",&x);
	sscanf(str2,"%f",&y);
	printf("Value of x=%d, Value of y=%.2f\n",x,y);
	return 0;
}