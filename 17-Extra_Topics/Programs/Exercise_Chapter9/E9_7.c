/*E9.7*/
#include<stdio.h>
int main(void)
{
	int i,arr[5]={25,30,35,40,45},*p=arr;
	for(i=0; i<5; i++)
	{
		(*p)++;	
		printf("%d   ",*p);
		p++;
	}
	return 0;
}