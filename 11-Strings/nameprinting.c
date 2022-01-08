#include<stdio.h>
void main()
{
	int i;
	char name[20];
	
	printf("enter the name :");
	for(i=0;i<10;i++)
	{
		scanf("%c",&name[i]);
		fflush(stdin);
	}
	printf("----------------\n");
	for(i=0;i<10;i++)
	{
		printf("%c",name[i]);
	}
}