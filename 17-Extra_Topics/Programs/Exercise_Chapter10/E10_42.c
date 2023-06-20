/*E10.42*/
#include<stdio.h>
#include<string.h>
int str_start(char *str1, char *str2);
int str_end(char *str, char *substr);
int main(void)
{
	char str1[30]="yes  no  yes";
	int i;

	i=str_start(str1,"yes");
	printf("%d  ",i);

	i=str_start(str1,"es");
	printf("%d  ",i);

	i=str_end(str1,"yes");
	printf("%d  ",i);

	i=str_end(str1,"ye");
	printf("%d  ",i);
	return 0;
}

/*Returns 1 if substr is present at the start of str*/
int str_start(char *str, char *substr)
{
	char *p1,*p2;
	if(*substr=='\0')
		return 0;
	p1=str;
	p2=substr; 
	while(*p1 == *p2)
	{
		if(*p1=='\0' || *p2=='\0')
			break;
		p1++;
		p2++;
	}
	if(*p2=='\0')
		return 1;
	else
		return 0;
}

/*Returns 1 if substr is present at the end of str*/
int str_end(char *str, char *substr)
{
	char *p1,*p2;
	
	if(*substr=='\0')
		return 0;

	for(p1=str; *p1!='\0'; p1++)
		;

	for(p2=substr; *p2!='\0'; p2++)
		;

	/*Now p1 and p2 point to the end of str and substr respectively*/
	while(*p1 == *p2)
	{
		if(p1==str || p2==substr) 
			break;
		p1--;
		p2--;
	}

	if(*p1==*p2 && p2==substr)
		return 1;
	else
		return 0;
}