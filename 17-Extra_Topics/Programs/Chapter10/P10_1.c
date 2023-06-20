/*P10.1 Program to print characters of a string and address of each character*/
#include<stdio.h>
int main(void)
{
	char str[]="India";
	int i;
	for(i=0; str[i]!='\0'; i++)
	{
		printf("Character = %c\t",str[i]);
		printf("Address = %p\n",&str[i]);
	}
	return 0;
}
