/*P8.24 Program to insert an item in a sorted array at the proper place by shifting other elements to the right */
#include<stdio.h>
#define SIZE 10
int main(void)
{
	int arr[SIZE];
	int i,item;
	printf("Enter elements of the array(in sorted order) : \n");
	for(i=0; i<SIZE-1; i++) /*rightmost space in the array should be empty*/
			scanf("%d",&arr[i] );
	printf("Enter the item to be inserted : ");
	scanf("%d",&item);
	for(i=SIZE-2; item<arr[i] && i>=0; i--)
		arr[i+1]=arr[i];    /*Shift elements to the right*/
	arr[i+1]=item;	    /*Insert item at the proper place*/

	for(i=0; i<SIZE; i++)
		printf("%d  ",arr[i]);
	printf("\n");
	return 0;
}