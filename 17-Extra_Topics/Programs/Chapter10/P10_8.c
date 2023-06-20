/*P10.8 strcat() function*/
#include<stdio.h>
#include<string.h>
int main(void)
{
	char str1[20], str2[20];
	printf("Enter two strings : ");
	gets(str1);
	gets(str2);
	strcat(str1,str2);
	printf("First string : %s\tSecond string : %s\n",str1,str2);
	strcat(str1, "_one");
	printf("Now first string is : %s \n",str1);
	return 0;
}