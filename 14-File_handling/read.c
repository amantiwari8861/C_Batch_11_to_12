<<<<<<< HEAD
#include<stdio.h>
#include<stdlib.h>
int main()
{
	FILE *fptr;	//why we need file handling ?
	fptr=fopen("C:\\Users\\Aman_Tiwari\\Desktop\\first.sql","r");//OPEN FILE IN READING MODE 
	if(fptr==NULL)
	{
		printf("Error! unable to open file");
		exit(1);
	}
	char ch;
	for(;;)//INFINITE for LOOP
	{
		ch=fgetc(fptr);
		if(ch==EOF)//END OF FILE 
		{
			// printf("ch=%d Exiting...\n",ch);
			break;
		}
		printf("%c",ch);
	}
	fclose(fptr);
	return 0;
=======
#include<stdio.h>
#include<stdlib.h>
int main()
{
	FILE *fptr;	//why we need file handling ?
	fptr=fopen("sample.txt","r");//OPEN FILE IN READING MODE 
	if(fptr==NULL)
	{
		printf("Error! unable to open file");
		exit(1);
	}
	char ch;
	for(;;)//INFINITE for LOOP
	{
		ch=fgetc(fptr);
		if(ch==EOF)//END OF FILE 
		{
			// printf("ch=%d Exiting...\n",ch);
			break;
		}
		printf("%c",ch);
	}
	fclose(fptr);
	return 0;
>>>>>>> eaa42a88730f025ddb6412a578957c2e832dfae6
}