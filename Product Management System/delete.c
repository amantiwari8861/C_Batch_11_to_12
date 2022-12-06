#include "op.h"

void deleteproduct(void)
{
	char target[40];
	int found = 0;
	FILE *sfile, *tfile;
	sfile = fopen("ViewStorage.dat", "r");
	tfile = fopen("DeletedStorage.dat", "w+");
	printf("\n Enter Product Name: ");
	fflush(stdin);
	scanf("%s", target);
	target[0] = toupper(target[0]);
	while (fscanf(sfile, "%s %s %i %i %i\n", st.cosmeticproductname, st.cosmeticproductcomp, &st.cosmeticprice, &st.cosmeticproductid, &st.cosmeticquantity) != EOF)
	{
		if (strcmp(target, st.cosmeticproductname) == 0)
		{
			found = 1;
		}
		else
		{
			fprintf(tfile, "%s %s %i %i %i\n", st.cosmeticproductname, st.cosmeticproductcomp, st.cosmeticprice, st.cosmeticproductid, st.cosmeticquantity);
		}
	}
	if (!found)
	{
		printf("\n Product Record not found");
		getch();
	}
	else
	{
		printf("\n Product Record deleted");
	}
	fclose(sfile);
	fclose(tfile);
	remove("ViewStorage.dat");
	rename("DeletedStorage.dat", "ViewStorage.dat");

	printf("\nPress any key to go to Main Menu!");
	while ((st.c = getch()) == '\r');
}