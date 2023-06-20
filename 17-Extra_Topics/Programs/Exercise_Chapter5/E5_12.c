/*E5_12*/
#include<stdio.h>
int main(void)
{
	char grade='A';
	int marks = 94;
	if(grade == 'A')
		if(marks > 95)
			printf("Excellent\n");
	else
		printf("Work hard for getting A grade\n");
	return 0;
}

/*
#include<stdio.h>
int main(void)
{
	char grade='A';
	int marks = 94;
	if(grade == 'A')
		if(marks > 95)
			printf("Excellent\n");
		else
			;
	else
		printf("Work hard for getting A grade\n");
	return 0;
}
*/