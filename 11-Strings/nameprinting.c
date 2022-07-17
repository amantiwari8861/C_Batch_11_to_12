#include<stdio.h>
int main()
{
	int i;
	char name[20];
	printf("enter the name :");
	for(i=0;i<10;i++)
	{
		// fflush(stdin);//to clear the buffer
		scanf("%c",&name[i]);
		fflush(stdin);//to clear the buffer
	}
	printf("----------------\n");
	for(i=0;i<10;i++)
	{
		printf("%c",name[i]);
	}
	return 0;
}