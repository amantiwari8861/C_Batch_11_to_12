#include<stdio.h>
int main()
{
	char name[20];
	printf("enter name :");
	// scanf("%s",&name);
	scanf("%[^\n]s",name);//to read the string(including space) till enter is pressed 
	printf("the name is %s \n",name);
	return 0;
}