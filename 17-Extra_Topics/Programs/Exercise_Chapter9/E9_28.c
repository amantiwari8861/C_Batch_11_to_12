/*E9.28*/
#include<stdio.h>
void swap(int *b,int *c);
int main(void)
{
	int i,j;
	int arr[10]={3,2,4,1,5,9,8,10,7,6};
	for(i=0; i<10; i++)
	   for(j=0; j<10-i-1; j++)
		if(*(arr+j) > *(arr+j+1))
			swap(arr+j,arr+j+1);
	for(i=0; i<10; i++)
		printf("%d\t",arr[i]);
	printf("\n");
	return 0;
}
void swap(int *b,int *c)
{
	int temp;
	temp=*b, *b=*c, *c=temp;
}