/*P10.36*/
#include<stdio.h>
#include<ctype.h>
int count_words(char *str);
int main(void)
{
	char str[50]=" blue green  red  ";
	printf("Number of words in string = %d\n",count_words(str));
	return 0;
}
int count_words(char *str)
{
	int count=0;
	while(*str!='\0')
	{
		while(isspace(*str))	/*Pass over white spaces*/
			str++;
		if(*str=='\0')	
			return count;
		while(!isspace(*str) && *str!='\0')
		{
			putchar(*str);
			str++;
		}
		count++;	
		printf("\n");
	}
	return count;
}
