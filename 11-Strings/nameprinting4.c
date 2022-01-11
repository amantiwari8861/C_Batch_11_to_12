#include<stdio.h>
int main()
{
	int i;
	char name[20];
	printf("enter name :");
	// scanf("%s",&name);
	scanf("%[^\n]s",name);
	printf("%s",name);
	return 0;
}