/*E5_38*/
#include<stdio.h>
int main(void)
{
    int i,j,k;
	
	i=0,j=10,k=6;
	while(1)
	{
		if(i==j || k<0)
			break;
		printf("%d %d %d\n",i,j,k);
		i++;
		j--;
		k=k-2;
	}
	printf("\n");
	
	for(i=0,j=10,k=6; i!=j && k>=0; i++,j--,k=k-2)
		printf("%d %d %d\n",i,j,k);
	return 0;
}
