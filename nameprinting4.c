#include<stdio.h>
int main()
{
	int i;
	char name[20];
	printf("enter name :");
	// scanf("%s",&name);
	scanf("%[^\n]s",name);
	//name[i]='\0';			//koi output nahi aayega
	printf("%s",name);
	return 0;
}