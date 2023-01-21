/*	
2.	******
	*****
	****
	***
	**
	*
*/
#include<stdio.h>
int main()
{
	for(int i=0;i<=5;i++)
	{
		for(int j=5;j>=i;j--)
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
}

/*
step 1:  i=0
		 i<=5 ==>  0<5  true
	(a)	j=5
		j>=i ==> 5 >=0  true
		print *
	(b) j=4
		4>=0  true
		print **
	(c) j=3
		3>= 0 true
		print ***
	(d) j=2
		2>=0 true
		print ****
	(e)	j=1
		1>=0 true
		print *****
	(f)	j=0
		0>=0 true
		print ******
step 2:	i=1


*/


