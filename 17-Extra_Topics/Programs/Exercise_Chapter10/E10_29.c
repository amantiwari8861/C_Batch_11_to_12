/*E10.29*/
#include<stdio.h>
int main(void)
{
	int marks;
	char name[50];
	printf("Enter marks : "); 
	scanf("%d",&marks);
	printf("Enter name : "); 
	gets(name);
	puts(name);
	return 0;
}