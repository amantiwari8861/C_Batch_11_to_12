#include<stdio.h>
void main()
{
	int i;
	char name[20];
	
	for(i=0;i<11;i++)
	{
		scanf("%c",&name[i]);
	}
	for(i=0;i<11;i++)
	{
		printf("%c",name[i]);
	}
}
// string: sequence of characters 