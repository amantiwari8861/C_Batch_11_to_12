#include<stdio.h>
#include<windows.h>
int main()
{
	
	for(int i=0;i<5;i++)//row
	{
		for(int j=0;j<10;j++)//column
		{
			Sleep(100);
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