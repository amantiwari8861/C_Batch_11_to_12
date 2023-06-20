/*E8.2*/
#include<stdio.h>
int main(void)
{
	int arr[4]={2,4,8,16},i=3,j=0;
	while(i)
	{
		j+=arr[i];
		i--;
	}
	printf("j=%d\n",j);
	return 0;
}