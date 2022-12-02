#include "op.h"
#include "gotoxy.h"

void read_item()
{
	FILE *f;
	int i, q;
	
	if((f=fopen("ViewStorage.dat","r"))==NULL)
	{

		gotoxy(10,3);
		printf("NO COSMETIC RECORD found");
		printf("\n\t\tPress any key to go back to Menu.");
		getch();
		


	}
	else
	{

		gotoxy(0,5);
			for(i=0;i<100;i++)
		{
			printf("-");
		}
		gotoxy(5,6);
		printf("Cosmetic Name");
		gotoxy(25,6);
		printf("Cosmetic Price");
		gotoxy(40,6);
		printf("Cosmetic Company");
		gotoxy(60,6);
		printf("Cosmetic Code");
		gotoxy(80,6);
		printf("Cosmetic Quantity\n");

		for(i=0;i<100;i++)
		{
			printf("-");
		}
		q=8;
		while(fscanf(f,"%s %s %i %i %i\n", st.cosmeticproductname,st.cosmeticproductcomp, &st.cosmeticprice, &st.cosmeticproductid,&st.cosmeticquantity)!=EOF)
		{
			gotoxy(5,q);
			printf("%s",st.cosmeticproductname);
			gotoxy(25,q);
			printf("%i",st.cosmeticprice);
			gotoxy(40,q);
			printf("%s",st.cosmeticproductcomp);
			gotoxy(60,q);
			printf("%i",st.cosmeticproductid);
			gotoxy(80,q);
			printf("%i",st.cosmeticquantity);

			q++;
		}
		printf("\n");
		for(i=0;i<100;i++)
			printf("-");
	}
	fclose(f);

	printf("\nPress any key to go to Main Menu!");
		//while((st.c = getch()) =='\r');
		getch();
	
} 

