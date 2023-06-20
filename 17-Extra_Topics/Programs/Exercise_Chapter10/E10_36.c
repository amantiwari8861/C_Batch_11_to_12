/*E10.36*/
#include<stdio.h>
#include<string.h>
#include<ctype.h>
void abbreviate(char *str1,char *str2);
int main(void)
{
	char str1[50],str2[10];
	strcpy(str1,"  World  Health  Organisation ");
	abbreviate(str1,str2);
	puts(str2);
	return 0;
}
void abbreviate(char *str1,char *str2)
{
	while(*str1!='\0')
	{
		while(isspace(*str1))	/*Skip white spaces*/
			str1++;
		if(*str1=='\0')	
		{
			*str2='\0';
			return;
		}
		*str2++ = *str1;
		while(!isspace(*str1) && *str1!='\0')
			str1++;
	}
	*str2='\0';
}