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
	while(1)//INFINITE WHILE LOOP
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
}