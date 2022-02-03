#include<stdio.h>
int main()
{
	int num;
	char ch;
	float pi;
	double sal;
	printf("enter the value of number :");
	scanf("%d",&num); // & (ampersand ) represents the address of container(variable)
	// fflush(stdin); // to clear the buffer value
	printf("enter the value of character :");
	scanf("%c",&ch);
	// fflush(stdin);
	printf("enter the value of decimal :");
	scanf("%f",&pi);
	printf("enter the value of double :");
	scanf("%lf",&sal);
	printf("the value of num is %d \n",num);// \n for next line
	printf("the value of ch is %c \n",ch);
	printf("the value of pi is %f \n",pi);
	printf("the value of sal is %lf \n",sal);
	return 0;
}

//IDE -> Integrated Development Environment eg. Dev cpp,eclipse,turbo c/c++ etc
//IDE -> COMPILER + TEXT EDITOR + INTELLISENCE
//TEXT EDITOR -> to edit the text eg. notepad,vs code etc.
//syntax : data_type  variable_name=value;
//	int num=50;
//	char ch='$';
//	float pi=3.14;
//	double sal=45223.78833;