/*P10.17 Program to sort strings represented by array of pointers*/
#include<stdio.h>
#include<string.h>
#define N 5
int main(void)
{
	char *arrp[N] = {"white","red","green","yellow","blue"};
	int i,j;
	char *temp;
	
	printf("Before sorting : \n");
	for(i=0; i<N; i++)
		printf("%s\t",arrp[i]);
	printf("\n");

	for(i=0; i<N ; i++)
		for(j=i+1; j<N; j++)
			if(strcmp(arrp[i],arrp[j])>0)
			{
				temp = arrp[i];
				arrp[i] = arrp[j];
				arrp[j] = temp;
			}
	printf("After sorting :\n");
	for(i=0; i<N; i++)
		printf("%s\t",arrp[i]);
	printf("\n");
	return 0;
}