/*E5_35*/

#include<stdio.h>
#include<math.h>

int main(void)
{
	int i,j,n;
	
	for(i=1;   ;i++)
	{
		if(i>5)
			break;
		printf("%d ",i);
	}
	printf("\n\n");

	i=1,j=3;
	while(i<5) 
	{
		if(j==0)
			break;
		printf("%d ",i++,j--);
	}

	printf("\n\n");
	n=43;
	for(i=2; i<=sqrt(n); i++)	
		if(n%i == 0)
			break;
	printf("%d\n",i);
	return 0;
}

/*
main()
{
	int i,j,n;
	
	for(i=1; i<=5; i++)
		printf("%d ",i);
	printf("\n\n");

	i=1, j=3;
	while(i<5 && j!=0)
		printf("%d ",i++,j--);
	printf("\n\n");

	n=43;
	for(i=2; i<=sqrt(n) && n%i!=0; i++);
	printf("%d\n",i);
	return 0;
}
*/
