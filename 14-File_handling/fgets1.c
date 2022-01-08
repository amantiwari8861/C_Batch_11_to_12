#include<stdio.h>
int main()
{
    char ch[10];
	printf("enter name less than 10\n");
	fgets(ch,10,stdin);
    printf("%s\n",ch);
	return 0;
}