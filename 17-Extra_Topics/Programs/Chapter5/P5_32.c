/*P5.32 Program to understand the switch control statement*/
#include<stdio.h>
int main(void)
{
	int choice;
	printf("Enter your choice : ");
	scanf("%d",&choice);
	switch(choice)
	{
		case 1:
				printf("First\n");
		case 2:
				printf("Second\n");
		case 3:
				printf("Third\n");
		default:
				printf("Wrong choice\n");
	}
	return 0;
}
