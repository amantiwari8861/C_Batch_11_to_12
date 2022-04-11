#include<stdio.h>
int main()
{
	
	for(int i=0;i<3;i++)//row
	{
		for(int j=0;j<5;j++)//column
		{
			printf("*");  
		}
		printf("\n");
	}
/*
	
1.	*
	**
	***
	****
	*****
	
2.	*****
	****
	***
	**
	*
	
3.  A
	AB
	ABC
	ABCD
	ABCDE
*/	
	return 0;
}