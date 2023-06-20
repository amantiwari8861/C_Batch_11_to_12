/*E8.8*/
#include<stdio.h>
int main(void)
{
	int a[10]={2,-3,4,-5,6,7,1,9,-10,-11};
	int i,j,x,k=0;
	for(i=0; i<10; i++)
	{
		x=a[k];
		if(x<0)
		{
			for(j=k; j<10; j++)
				a[j]=a[j+1];
			a[9]=x;
		}
		else
			k++;
	}
	for(i=0; i<10; i++)
		printf("%d  ",a[i]);
	printf("\n");
	return 0;
}