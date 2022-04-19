#include<stdio.h> //pre-processor directives(folder)
#include<conio.h> //console input output headerfile
int main()
{
	printf("hello world! \n"); // \n -> next line
	printf(" my name is Aman ");
	//variables : it is a type of container which stores our daTA
	//at any specific location in memory (RAM)
	// syntax = formula
	//	syntax: data_type variable_name=value;
	int aman=10,aman1=20,result;//we hard-quoted the value during declaration (pre-define value)
	result=aman+aman1; // result =10 + 20 ; result = 30;
	printf(" result ki value %d hai. ",result); // %d is format specifier of int
	// format specifier : eg. %d,%f etc	

	printf("the sum of %d and %d is %d .",aman,aman1,result);
	getch();//to hold the output screen in turbo c/c++
	return 0;
}
// text editor -> notepad,sublime,notepad++,vs code etc
//IDE -> integrated development environment 
// IDE examples -> turbo c/c++ ,dev cpp/c++,code blocks etc
// compiler -> which converts our source code to binary code(0,1)
// compiler example -> gcc,bcc
// IDE = textEditor + compiler + intellisence