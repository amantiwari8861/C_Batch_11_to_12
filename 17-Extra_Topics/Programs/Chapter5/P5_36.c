/*P5.36 A menu driven program using infinite loop and switch*/
#include<stdio.h>
int main(void)
{
	int choice;
	while(1)
	{
		printf("1.Create database\n");
		printf("2.Insert new record\n");
		printf("3.Modify a record\n");
		printf("4.Delete a record\n");
		printf("5.Display all records\n");
		printf("6.Exit\n");
		printf("Enter your choice : ");

		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
				printf("Database created.....\n\n");
				break;
			case 2:
				printf("Record inserted.....\n\n");
				break;
			case 3:
				printf("Record modified.....\n\n");
				break;
			case 4:
				printf("Record deleted.....\n\n");
				break;
			case 5:
				printf("Records displayed.....\n\n");
				break;
			case 6:
				exit(1);
			default:
				printf("Wrong choice\n");
		}/*End of switch*/
	}/*End of while*/
	return 0;
}/*End of main( )*/
