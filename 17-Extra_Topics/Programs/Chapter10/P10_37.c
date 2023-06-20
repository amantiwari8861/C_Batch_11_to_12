/*P10.37*/
#include<stdio.h>
#include<string.h>
void count(char *str);
int main(void)
{
	char str[50];
	printf("Enter a string : ");
	gets(str);
	count(str);
	return 0;
}
void count(char *str1)
{
	char str[50],ch;
	int i,j,count,n;
	strcpy(str,str1);
	n=strlen(str);

	for(i=0; i<n; i++)
	{
		if(str[i]!=0)
		{
			ch=str[i];	
			count=0;
			for(j=0; j<n; j++)
				if(str[j]==ch)
				{
					count++;
					str[j]=0;
				}
			printf("%c occurs %d times\n",ch,count);
        }
	}
}
