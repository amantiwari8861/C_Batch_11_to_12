/*P10.25 Program to convert integer and float values to strings using sprintf() function*/
#include<stdio.h>
int main(void)
{
	char str1[10];
	char str2[10];
	int x=1348;
	float y=234.56;
	sprintf(str1,"%d",x);
	sprintf(str2,"%.2f",y);
	printf("str1=%s, str2=%s\n",str1,str2);
	return 0;
}