#include<stdio.h>
int main()
{
	//String means sequence of characters 
	char name[20];
	printf("enter name :");
	// scanf("%s",&name);
	scanf("%[^\n]s",&name);//to read the string(including space) till enter is pressed 


	printf("the name is %s \n",name);
	return 0;
}