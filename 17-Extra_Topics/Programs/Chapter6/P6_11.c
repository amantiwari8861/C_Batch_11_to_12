/*P6.11 Program that uses a function with no arguments and no return values*/
#include<stdio.h>
void displaymenu(void);
int main(void)
{
	int choice;
	displaymenu();
	printf("Enter your choice : ");
	scanf("%d",&choice);
	return 0;
}
void displaymenu(void)
{
	printf("1.Create database\n");
	printf("2.Insert new record\n");
	printf("3.Modify a record\n");
	printf("4.Delete a record\n");
	printf("5.Display all records\n");
	printf("6.Exit\n");
}
