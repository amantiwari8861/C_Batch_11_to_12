/*P12.24 Function to understand the use of clearerr()*/
#include<stdio.h>
#include<stdlib.h>
int main(void)
{
	FILE *fptr;
	int ch;
	fptr = fopen("test","w");
	ch = getc(fptr);
	if(ferror(fptr))
	{
		printf("Error in read operation\n");
		clearerr(fptr);
	}	
	fclose(fptr);
	return 0;
}