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
	//name[i]='\0';			it will store space in array
	printf("%s",name);
	return 0;
}

/*
lbps : logic building and effective problem solving 
algorithms 
flowchart 
psuedo code
dry run etc
*/