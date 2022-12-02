#include "op.h"
#include "add.c"
#include "delete.c"
#include "price.c"
#include "view.c"
#include "edit.c"

#define ENTER 13
#define BKSP 8
#define SPACE 32
#define TAB 9


int main()
{
int choice;
	system("cls");
  
	main:
	printf("\n======== Welcome to Cosmetic Product Management System =========");
	printf("                                                                                          ");
	
	printf("\n\t\tEnter 1: Add Cosmetics");
	printf("\n\t\tEnter 2: Delete Cosmetics");
	printf("\n\t\tEnter 3: View Cosmetics");
	printf("\n\t\tEnter 4: Edit Cosmetics");
	printf("\n\t\tEnter 5: Exit!");

	printf("\n\n\t\tEnter your choice[1-5]:");
	scanf("%i", &choice);

	system("cls");

	switch(choice)
	{
		case 1:
			add_item();
			break;
		case 2:
			deleteproduct();
			break;
		
		case 3:
		    read_item();
			break;
		case 4:
			edit_item();
			break;
		case 5:
		printf("System Exit");
		exit(0);
		break;


		default:
		printf("Invalid Choice! System Exit\n");
			getch();
	}
	getch();
	return 0;    
}



