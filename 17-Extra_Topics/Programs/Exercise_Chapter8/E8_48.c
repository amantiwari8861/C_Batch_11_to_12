/*E8.48*/
#include<stdio.h>
void reverse(int a[], int start, int end);
int main(void)
{
	int a[10]={0,1,2,3,4,5,6,7,8,9},i;
	reverse(a,4,7);
	for(i=0; i<10; i++)
		printf("%d ",a[i]);
	return 0;
}
void reverse(int a[], int start, int end)
{
	int i,j,temp;
	for(i=start,j=end; i<j; i++,j--)
	{
		temp = a[i];
		a[i] = a[j];
		a[j] = temp;
	}
}