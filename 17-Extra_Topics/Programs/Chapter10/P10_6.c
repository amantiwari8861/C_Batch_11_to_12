/*P10.6 Program to understand the work of strcmp() function */
#include<stdio.h>
#include<string.h>
int main(void)
{
	char str1[10],str2[10];
    printf("Enter two strings : ");
    gets(str1);
	gets(str2);
	if((strcmp(str1,str2))==0)
  		printf("Strings are same\n");
	else   
		printf("Strings are not same\n");
	return 0;
}
