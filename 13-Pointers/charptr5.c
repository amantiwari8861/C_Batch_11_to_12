
#include<stdio.h>

int main()
{
	//char name[2][20]={"abcd","xyz"}; //20 character blocks fixed in 2 rows 
	
	char *name2[]={"abcd","xyz"}; //only required blocks is occupied or used 

	// puts(name[0]);
	// puts(name[1]);
	
	puts(name2[0]);
	puts(name2[1]);
	
	return 0;
}