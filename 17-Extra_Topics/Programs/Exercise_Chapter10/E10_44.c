/*P10.44*/
#include<stdio.h>
#include<string.h>
int count_word1(char *str,char *word);
int count_word2(char *str,char *word);
int main(void)
{
	char str[100]="hut cut hut but nuthut hut on hutin but hut";
	printf("\n%d \n",count_word1(str,"hut"));
	printf("\n%d \n",count_word2(str,"hut"));
	return 0;
}
int count_word1(char *str,char *word)
{
	int i=0;
	char *s=str;
	s=strstr(s,word);
	while(s!=NULL)
	{
		if(s==str && *(s+strlen(word))=='\0') /*only word*/
			i++;
		else if(s==str && *(s+strlen(word))==' ')/*first word*/
			i++;
		else if(*(s-1)==' ' && *(s+strlen(word))=='\0' )/*last word*/
			i++;
		else if(*(s-1)==' ' && *(s+strlen(word))==' ')/*in middle*/
				i++;
		if(s)
			puts(s);
		s=strstr(s+1,word);
	}
	return i;
}
int count_word2(char *str,char *word)
{
	int i=0;
	char *s=str;
	s=strstr(s,word);
	while(s!=NULL)
	{
		if(s==str || *(s-1)==' ')
			if(*(s+strlen(word))=='\0'|| *(s+strlen(word))==' ')
				i++;
		if(s)
			puts(s);
		s=strstr(s+1,word);
	}
	return i;
}