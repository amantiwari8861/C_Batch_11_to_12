#include<stdio.h>
#include<windows.h>
int main()
{	
	char sentence[100];
	FILE *fptr;
	// fptr=fopen("C:/Users/admin/Desktop/Karan.txt","w");
	fptr=fopen("C:/Users/admin/Desktop/Karan.txt","a");
	printf("enter the sentence:\n");
	fgets(sentence,100,stdin);
	fprintf(fptr,"the sentence is :\t%s",sentence);
	fclose(fptr);


	rename("C:/Users/admin/Desktop/Karan.txt","C:/Users/admin/Desktop/richa.txt");
	remove("C:/Users/admin/Desktop/richa.txt");

	// system("mkdir \"C:/Users/admin/Desktop/Ravi\"");
	// system("code .");
	// system("rmdir /s \"C:/Users/admin/Desktop/Ravi\"");
	// fptr=fopen("C:/Users/admin/Desktop/Ravi/Aman.txt","w");
	// fclose(fptr);

	return 0;
}