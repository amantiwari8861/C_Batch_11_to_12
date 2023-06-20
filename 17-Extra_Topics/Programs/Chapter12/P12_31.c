/*P12.31*/
#include<stdio.h>
#include<ctype.h>
#include<stdlib.h>
int is_vowel(int ch);
int main(void)
{
	char wrong[100],right[150];
	int i,j;
	FILE *fptr1,*fptr2;

	if((fptr1 = fopen("wrong.txt","r")) == NULL)
	{
		printf("Error in opening file\n");
		exit(1);
	}
	if((fptr2 = fopen("right.txt","w")) == NULL)
	{
		printf("Error in opening file\n");
		exit(1);
	}
	while((fgets(wrong,100,fptr1)) != NULL)
	{
		i=j=0;
		while(wrong[i]!='\0')
		{
			if(islower(wrong[i]) && (i==0 || wrong[i-1]=='.'))
				right[j++] = toupper(wrong[i++] );
		    else if(wrong[i]==' ' && wrong[i-1]=='a' && is_vowel(wrong[i+1]))
		    {
				right[j++]='n';
				right[j++]=wrong[i++];
	        }
	        else
				right[j++]=wrong[i++];
		}
		right[j]='\0';
		fputs(right, fptr2);
	}
	return 0;
}
int is_vowel(int ch)
{
	switch(ch)
	{
		case 'a': case 'A': 
		case 'e': case 'E': 
		case 'i': case 'I': 
		case 'o': case 'O':	
		case 'u': case 'U':
					return 1;
	}
	return 0;
}