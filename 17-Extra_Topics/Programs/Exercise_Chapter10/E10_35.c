/*E10.35*/
#include<stdio.h>
#include<string.h>
#include<ctype.h>
char *sort(char *str);
int main(void)
{
	char str[30];
	strcpy(str,"Devanshi");
	puts(sort(str));
	return 0;
}
char *sort(char *str)
{
	int i,j,n;
	char temp;
	n=strlen(str);
	for(i=0; i<n-1 ;i++)
		for(j=0; j<n-1-i; j++)
		{
			if(toupper(str[j]) > toupper(str[j+1]) )
			{
				temp = str[j];
				str[j] = str[j+1];
				str[j+1] = temp;
			}
		}
	return str;
}