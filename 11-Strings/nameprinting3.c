#include<stdio.h>
int main()
{
	int i;
	char name[20];
	
	for(i=0;i<11;i++)
	{
		scanf("%c",&name[i]);
		fflush(stdin);
	}
	//name[i]='\0';			it will store null at last index in array
	printf("u gave :%s ",name);
	return 0;
}