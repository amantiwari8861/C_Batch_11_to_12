/*E10.41*/
#include<stdio.h>
#include<string.h>
int find_indexF(char *str, char *substr);
int find_indexL(char *str, char *substr);
int main(void)
{
	char str1[30];
	strcpy(str1,"no yes no yes");
	printf("%d\n",find_indexF(str1,"yes"));
	printf("%d\n",find_indexL(str1,"yes"));
	return 0;
}
/*Returns index of the first occurrence of substring*/
int find_indexF(char *str, char *substr)
{
	char *s,*p1,*p2;
	
	if(*substr=='\0')	/*If substring is empty*/
		return -1;
	
	for(s=str; *s!='\0'; s++) 
	{
		p1=s;
		p2=substr; 
		while(*p2!='\0' && *p1==*p2)
		{
			p1++;
			p2++;
		}
		if(*p2=='\0')  
			return s-str;
	}
	return -1;
}
/*Returns index of the last occurrence of substring*/
int find_indexL(char *str, char *substr)
{
	int i;
	char *s,*p1,*p2;
	
	if(*substr=='\0')	/*If substring is empty*/
		return -1;
	i=-1;
	for(s=str; *s!='\0'; s++) 
	{
		p1=s;
		p2=substr; 
		while(*p2!='\0' && *p1==*p2)
			p1++,p2++;
		if(*p2=='\0')  
			i = s-str;
	}
	return i;
}