/*E9.10*/
#include<stdio.h>
int main(void)
{
	int arr[10]={25,30,35,40,55,60,65,70,85,90},*p;
	for(p=&arr[0]; p<arr+10; p++)
		printf("%d   ",*p);
	return 0;
}