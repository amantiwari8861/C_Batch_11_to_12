/*E10.55*/
#include<stdio.h>
#include<string.h>

void Permute1(char str[]);
void Permute1_rec(char str[], char* currentptr);

void Permute2(char str[]);
void Permute2_rec(char str[], int startIndex, int lastIndex);

void Swap(char *a, char *b);
int main(void)
{ 
	char str[10]="abc";
	Permute1(str);
	printf("\n\n");
	Permute2(str);
	printf("\n");
	return 0;
}
void Permute1(char str[])
{
	Permute1_rec(str,str);
}
void Permute1_rec(char str[], char* currentptr)
{
	char *ptr;
   	if( *(currentptr + 1) == '\0')
	   printf("%s\t", str);
	else
	for(ptr=currentptr; *ptr!='\0'; ptr++)
    {
		Swap(ptr,currentptr);
		Permute1_rec(str, currentptr+1);
		Swap(ptr,currentptr);
	}
}
void Permute2(char str[])
{
	Permute2_rec(str,0,strlen(str)-1);
}
void Permute2_rec(char str[], int startIndex, int lastIndex)
{
	int i;
	if(startIndex==lastIndex)
	{
		for(i=0;i<=lastIndex;i++)
			printf("%c",str[i]);
		printf("\t");
	}
	else
	for(i=startIndex;i<=lastIndex;i++)
	{
		Swap(&str[startIndex], &str[i]);
		Permute2_rec(str,startIndex+1,lastIndex);
		Swap(&str[startIndex], &str[i]);
	}
}
void Swap(char *a, char *b)
{
	char temp = *a;  *a=*b; *b=temp;
}