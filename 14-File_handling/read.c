#include<stdio.h>
#include<stdlib.h>
int main()
{
	FILE *fptr;	//why we need file handling ?
	char ch;
	fptr=fopen("C:/Users/Aman_Tiwari/Desktop/dem1.c","r");//OPEN FILE IN READING MODE 
	if(fptr==NULL)
	{
		printf("Error! unable to open file");
		exit(1);
	}
	while(1)//INFINITE WHILE LOOP
	{
		ch=fgetc(fptr);
		if(ch==EOF)//END OF FILE 
		{
			break;
		}
			printf("%c",ch);
	}
	fclose(fptr);
	return 0;
}