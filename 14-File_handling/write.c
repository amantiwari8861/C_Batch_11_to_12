#include<stdio.h>
int main()
{	
	char sentence[100];
	FILE *fptr;
	// fptr=fopen("hello.txt","w");
	fptr=fopen("hello.txt","a");
	printf("enter the sentence:\n");
	fgets(sentence,100,stdin);

	fprintf(fptr,"the sentence is :\t%s\n",sentence);
	fclose(fptr);
	return 0;
}