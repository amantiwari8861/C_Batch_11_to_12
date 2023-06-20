/*E10.33*/
#include<stdio.h>
#include<string.h>
int main(void)
{
	char *p,name[50];

	printf("Enter a string : ");
    fgets(name,sizeof(name),stdin);
	printf("%s...\n",name);

	printf("Enter a string : ");
	fgets(name,sizeof(name),stdin);
	if((p=strchr(name,'\n'))!=NULL)
		*p='\0';
	printf("%s...\n",name);
	
	printf("Enter a string : ");
	fgets(name,sizeof(name),stdin);
	name[strlen(name)-1]='\0';
	printf("%s...\n",name);
	return 0;
}