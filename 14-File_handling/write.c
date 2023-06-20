<<<<<<< HEAD
#include<stdio.h>
int main()
{	
	char sentence[100];
	FILE *fptr;
	fptr=fopen("C:/Users/Aman_Tiwari/Desktop/arun.txt","a");
	// fptr=fopen("C:/Users/Aman_Tiwari/Desktop/kamal.bin","wb");
	printf("enter the sentence:\n");
	fgets(sentence,100,stdin);
	fprintf(fptr,"the sentence is :\t%s\n",sentence);
	fclose(fptr);
	return 0;
=======
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
>>>>>>> eaa42a88730f025ddb6412a578957c2e832dfae6
}