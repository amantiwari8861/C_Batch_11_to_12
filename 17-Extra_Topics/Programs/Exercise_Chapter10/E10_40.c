/*E10.40*/
#include<stdio.h>
#include<string.h>
char *strstr_r(char *str, char *substr);
int main(void)
{
	char str1[50];
	strcpy(str1,"no yes ... yes no yes no");
	puts(strstr_r(str1,"yes"));
	return 0;
}
/*Return a pointer to the last occurrence of the substring*/
char *strstr_r(char *str, char *substr)
{
	char *prev,*s;
	
	if(*substr=='\0')
		return NULL;

	prev=NULL;
	s=strstr(str,substr);
	while(s!=NULL)
	{
		prev=s;
		s=strstr(prev+1,substr);
	}
    return prev;
}