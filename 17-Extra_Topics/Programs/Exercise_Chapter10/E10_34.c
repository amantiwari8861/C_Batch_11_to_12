/*E10.34*/
#include<stdio.h>
#include<string.h>
char *remove_LTblanks(char *str);
int main(void)
{
	char str[100]="   Deepali Saxena     ";
	printf("...%s..",remove_LTblanks(str));
	return 0;
}
char *remove_LTblanks(char *str)
{
	int i,j,l,t,newlength;
	l=0;
	while(str[l]==' ') 
		l++;
	/*Leading Blanks = l*/
	j=strlen(str)-1;
	while(str[j]==' ')
		j--;
	t=strlen(str)-1-j;
	/*printf("Trailing Blanks = t*/
	newlength = strlen(str)-l-t;
	for(i=0,j=l; i<newlength; i++,j++)
		str[i]=str[j];
	str[newlength]='\0';
	return str;
}
