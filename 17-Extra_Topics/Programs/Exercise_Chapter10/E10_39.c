/*E10.39*/
#include<stdio.h>
#include<string.h>
int pstrncmp(char *str1,char *str2, int n);
char *pstrncpy(char *str1, char *str2, int n);
char *pstrncat(char *str1,char *str2, int n);
int main(void)
{
	char str1[50]="Dev", str2[50]="anshikal";
	pstrncat(str1,str2,5);
    puts(str1);
	
	strcpy(str1,"Deepali"); strcpy(str2,"Deepam");
	printf("%d\n",pstrncmp(str1,str2,5) );

	strcpy(str1,""); strcpy(str2,"Vinay");
	pstrncpy(str1,str2,4);
	puts(str1);
	return 0;
}

int pstrncmp(char *str1,char *str2, int n)
{
	while(*str1 == *str2)
	{
		n--;
		if(*str1 == '\0' || n<=0 )
			return 0;
		str1++;
		str2++;
	}
	return(*str1 - *str2);
}

char *pstrncpy(char *str1, char *str2, int n)
{
	while(*str2!='\0' && n>0)
	{
		*str1++ = *str2++;
		n--;
	}
	while(n > 0);
	{
		*str1++ = '\0';
		n--;
	}
	return str1;
}

char *pstrncat(char *str1,char *str2, int n)
{
	char *p=str1;
	int i;
	while(*p!='\0')
		p++;
	
	for(i=0; i<n; i++)
		*p++ = *str2++;
	*str2='\0';
	return str1;
}
