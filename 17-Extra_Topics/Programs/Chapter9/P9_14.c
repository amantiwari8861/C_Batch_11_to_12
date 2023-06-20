/*P9.14 Program to print elements of a 2-D array by subscripting a pointer to an array variable*/
#include<stdio.h>
int main(void)
{
	int arr[3][4] = { {10,11,12,13}, {20,21,22,23}, {30,31,32,33} };
	int (*ptr)[4];
	ptr = arr;
	printf("%p   %p  %p\n",ptr,ptr+1,ptr+2);
	printf("%p   %p  %p\n",*ptr,*(ptr+1),*(ptr+2));
	printf("%d  %d   %d\n",**ptr,*(*(ptr+1)+2),*(*(ptr+2)+3));
	printf("%d  %d   %d\n",ptr[0][0],ptr[1][2],ptr[2][3]);
	return 0;
}