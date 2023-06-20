/*P10.43*/
#include<stdio.h> 
int length(char *str);
void display(char *str);
void Rdisplay(char *str);	
int main(void)
{
	char str[50]="Devanshi";
	printf("%d\n",length(str));
	display(str);
	printf("\n");
	Rdisplay(str);
	return 0;
}
int length(char *str)
{
	if(*str == '\0')
	      return 0;
	return (1 + length(str+1));
}
void display(char *str)
{
	if(*str == '\0')
	      return;
	putchar(*str);
	display(str+1);
}
void Rdisplay(char *str)	
{
	if(*str == '\0')
	      return;
	Rdisplay(str+1);
	putchar(*str);
}