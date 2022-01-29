#include<stdio.h>
int main()
{
    char ch[10];
	printf("enter String less than 10 letter\n");
	fgets(ch,10,stdin); //working like scanf
	//fgets reads the string from the file and stores it in the array
	//stdin is the pre-defined file pointer to get data from user
    printf("the string is : %s\n",ch);
	return 0;
}