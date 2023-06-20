/*P12.30*/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int display(char line[],char wordtext[]);
int is_end(int ch);
int main(void)
{
	char line[81];
	int total = 0;
	FILE *fptr;

	if((fptr=fopen("test.txt","r")) == NULL)
	{
		printf("File doesn't exist\n");
		exit(1);
	}
	while((fgets(line,81,fptr))!=NULL)
		total = total + display( line, "that" );
	printf("Number of times the given word occurs in file is %d\n",total); 
	fclose(fptr);
	return 0;
}
int display(char line[],char wordtext[])
{
	int i,j,k,len;
	char str[80];
	int count = 0;
	len = strlen(wordtext);
	for(i=0; line[i]!='\0'; i++)
	{
		k = 0;
		if(is_end(line[i-1]) && is_end(line[i+len]) )
		{
			for(k=0,j=i; k<len; j++,k++)
				str[k] = line[j];
			str[k] = '\0';
			if(strcmp(str,wordtext) == 0)
				count++;
		}
	}
	if(count>0)
	{
		printf("%s",line);
		printf("count = %d\n",count);
	}
	return count;
}
int is_end(int ch)
{
	switch(ch)
	{
		case '\n':  case '\t':  case ' ':  case ', ':  case '.':  case ':':  case ';':  case '-' :
			return 1;
	}
	return 0;
}


/*P12.30*/
/*
#include<stdio.h>
#include<stdlib.h>
int display(char line[],char wordtext[]);
int is_end(int ch);
main()
{
	char line[81];
	int total = 0;
	FILE *fptr;

	if((fptr=fopen("test.txt","r")) == NULL)
	{
		printf("File doesn't exist\n");
		exit(1);
	}
	while((fgets(line,81,fptr))!=NULL)
		total = total + display( line, "that" );
	printf("Number of times the given word occurs in file is %d\n",total); 
	fclose(fptr);
}
int display(char line[],char wordtext[])
{
	int i,j,k,len;
	char str[80];
	int count = 0;
	len = strlen(wordtext);
	for(i=0; line[i]!='\0'; i++)
	{
		k = 0;
		if((i==0 || is_end(line[i-1])) && is_end(line[i+len]) )
		{
			for(k=0,j=i; k<len; j++,k++)
				str[k] = line[j];
			str[k] = '\0';
			if(strcmp_in(str,wordtext) == 0)
				count++;
		}
	}
	if(count>0)
	{
		printf("%s",line);
		printf("count = %d\n",count);
	}
	return count;
}
int is_end(int ch)
{
	switch(ch)
	{
		case '\n':  case '\t':  case ' ':  case ', ':  case '.':  case ':':  case ';':  case '-' :
			return 1;
	}
	return 0;
}
strcmp_in(char *str1, char *str2)
{
	int i; 
	for(i=0; str1[i]!='\0'; i++)
	if(toupper(str1[i]) != toupper(str2[i]))
		return 1;
	return 0;
}
*/