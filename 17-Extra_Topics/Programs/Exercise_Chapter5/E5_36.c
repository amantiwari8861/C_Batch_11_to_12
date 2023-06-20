/*E5_36*/
#include<stdio.h>
int main(void)
{
	int i=1,j=3;
	while(i<5) 
	{
		i++;		
		if(j==0)
			break;
		j--;
	}
	printf("%d %d\n",i,j);	
	return 0;
}

/*
int main(void)
{
	int i=1, j=3;
	while(i<5 && j!=0) 
	{
		i++;		
		j--;
	}
	printf("%d %d\n",i,j);	
	return 0;
}
*/
