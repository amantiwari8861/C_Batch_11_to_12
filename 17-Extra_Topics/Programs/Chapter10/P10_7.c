/*P10.7 strcpy() function */
#include<stdio.h>
#include<string.h>
int main(void)
{
	char str1[10], str2[10];
	printf("Enter a string :" );
	scanf("%s",str2);
	strcpy(str1, str2);
	printf("First string :%s \t\t Second string : %s\n",str1,str2);
	strcpy(str1,"Delhi");
	strcpy(str2,"Bangalore");  
	printf("First string :%s \t\t Second string : %s\n",str1,str2);
	return 0;
}
