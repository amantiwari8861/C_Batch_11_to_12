/*E10.51*/  
#include<stdio.h>
#include<string.h>
int findLast(char *str, char c);
int find(char *str, char c, int n);
int main(void)
{ 
	char str[100]; 
	char c='a';
	printf("Enter a string :");
    	gets(str);
	printf("%d\n",findLast(str,c));
	return 0;
} 
int findLast(char *str,char c)
{
	return find(str,c,strlen(str));
}
int find(char *str, char c, int n)
{
	if(n==0)
		return -1;
	if(str[n-1]==c)
		return n-1;
	return find(str,c,n-1);
}