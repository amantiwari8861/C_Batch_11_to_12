/*P9.29 realloc() function*/
#include<stdio.h>
#include<stdlib.h>
int main(void)
{
	int i,*ptr;
	ptr=(int *)malloc(5 *sizeof(int));
	if(ptr==NULL)
	{
		printf("Memory not available\n");
		exit(1);
	}
	for(i=0; i<5; i++)
		*(ptr+i)=i*2;
	
	ptr=(int *)realloc(ptr,9*sizeof(int));    /*Allocate memory for 4 more integers*/
	if(ptr==NULL) 
	{
		printf("Memory not available\n");
		exit(1);
	}
	for(i=5; i<9; i++)
		*(ptr+i)=i*10;

	for(i=0; i<9; i++)
		printf("%d ",*(ptr+i));
	return 0;
}