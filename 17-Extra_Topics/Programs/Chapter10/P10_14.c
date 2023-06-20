/*P10.14 Program to show the differences between array of strings and array of pointers to strings*/
#include<stdio.h>
#include<string.h>
int main(void)
{
	char  arr[5][10];
	char *arrp[5];

	arr[0]="January"; 			/*Invalid*/
	arrp[0]="January"; 			/*Valid*/
		
	strcpy(arr[1],"February");	/*Valid*/
	strcpy(arrp[1],"February");	/*Invalid, arrp[1] not initialized*/

	scanf("%s",arr[2]);			/*Valid*/
	scanf("%s",arrp[2]);		/*Invalid, arrp[2] not initialized*/

	arrp[3]=(char *)malloc(10);
	strcpy(arrp[3],"March");	/*Valid*/
		
	arrp[4]=(char *)malloc(10);
	scanf("%s",arrp[4]);		/*Valid*/
	return 0;
}