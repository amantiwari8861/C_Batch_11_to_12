#include<stdio.h>
int main()
{	
	char sentence[100];
	FILE *fptr;
	// fptr=fopen("C:/Users/Aman_Tiwari/Desktop/program.txt","w");
	fptr=fopen("C:/Users/Aman_Tiwari/Desktop/program.txt","a");
	printf("enter the sentence:\n");
	gets(sentence);
	fprintf(fptr,"the sentence is :\t%s\n",sentence);
	fclose(fptr);
	return 0;
}