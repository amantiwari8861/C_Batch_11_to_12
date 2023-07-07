#include<stdio.h>
int main()
{	
	char sentence[100];
	FILE *fptr;
	fptr=fopen("C:/Users/Aman_Tiwari/Desktop/priyanshu.txt","a");
	printf("enter the sentence:\n");
	fgets(sentence,100,stdin);
	fprintf(fptr,"the sentence is :\t%s",sentence);
	fclose(fptr);
	return 0;
}