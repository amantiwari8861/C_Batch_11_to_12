#include<stdio.h>
int main()
{
	//String means sequence of characters 
	char name[20];
	printf("enter name :");
	// scanf("%s",&name);// only for one word
	scanf("%[^\n]s",&name);//to read the string(including space) till enter is pressed 
	// scanf("%[^\n]s%*c",name);//to read the string(including space) till enter is pressed 

	printf("the name is %s. \n",name);
	printf(" %c ",name[3]);
	return 0;
}