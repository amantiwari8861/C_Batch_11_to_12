/*P8.23 Program to insert an item in an array at a specified index by moving other elements to the right*/
#include<stdio.h>
#define SIZE 10
int main(void)
{
	int arr[SIZE];
	int i,item,index;
	printf("Enter elements of the array : \n");
	for(i=0; i<SIZE-1; i++) /*rightmost space in the array should be empty*/
			scanf("%d",&arr[i]);
	printf("Enter the item to be inserted : ");
	scanf("%d",&item);
	printf("Enter the index where item is to be inserted : ");
	scanf("%d",&index);

	for(i=SIZE-2; i>=index; i--)
		arr[i+1]=arr[i];    /*Shift elements to the right*/
	arr[i+1]=item;	    /*Insert item at the proper place*/

	for(i=0; i<SIZE; i++)
		printf("%d  ",arr[i]);
	printf("\n");
	return 0;
}