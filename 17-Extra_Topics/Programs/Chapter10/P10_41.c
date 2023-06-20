/*P10.41*/ 
#include<stdio.h>
#include<string.h>
void encrypt1(char *str);
void decrypt1(char *str);
void encrypt2(char *str1, char *str2);
void decrypt2(char *str1,char *str2);
int strch(char *str, char ch);

int main(void)
{
	char str[100],str2[30];
	strcpy(str,"program");
	puts(str);
	encrypt1(str);
	puts(str);
	decrypt1(str);
	puts(str);

	strcpy(str2,"mnkghdtabwvuprqczjxieyflos");
	strcpy(str,"program");
	puts(str);
	encrypt2(str,str2);
	puts(str);
	decrypt2(str,str2);
	puts(str);
	return 0;
}
void encrypt1(char *str)
{
	for( ;*str!='\0'; str++)
	{
		if(*str<97 || *str>122)
			continue;
		if(*str=='z')
			*str='a';
		else
			*str=*str+1;
	}
}

void decrypt1(char *str)
{
	for( ; *str!='\0'; str++)
	{
		if(*str<97 || *str>122)
			continue;
		if(*str=='a')
			*str='z';
		else
			*str=*str-1;
	}
}
void encrypt2(char *str1, char *str2)
{
	for( ;*str1!='\0'; str1++)
	{
		if(*str1<97 || *str1>122)
			continue;
		*str1=str2[*str1-97];
	}
}
void decrypt2(char *str1, char *str2)
{
	int i;
	for( ; *str1!='\0'; str1++)
	{
		if(*str1<97 || *str1>122)
			continue;
		i=strch(str2,*str1);
		*str1=i+97;
	}
}
int strch(char *str, char ch)
{
	int i;
	for(i=0; str[i]!='\0'; i++)
		if(str[i]==ch)
			return i; 
}
