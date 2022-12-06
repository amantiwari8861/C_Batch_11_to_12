#include "op.h"

void edit_item()
{
	int ind, val;
	char target[40];
	FILE *fp, *rp;
	int a=0;
	int id;
	char Edit;
	long int size=sizeof(st);
	if((fp=fopen("ViewStorage.dat","r+"))==NULL)
	{
		printf("NO PRODUCT RECORD ADDED.");
		
	}
	else
	{
		rp = fopen("DeletedStorage.dat","a");
		system("cls");
		printf("Enter Product Code:");
		scanf("%i",&id);
		fflush(stdin);
		while(fscanf(fp,"%s %s %i %i %i\n", st.cosmeticproductname,st.cosmeticproductcomp, &st.cosmeticprice, &st.cosmeticproductid,&st.cosmeticquantity)!=EOF)
		{
			if(id==st.cosmeticproductid)
			{

				a=1;
				printf("\n\t*****  Product Record found  *****");
				printf("\nProduct Name  \t\t: %s",st.cosmeticproductname);
				printf("\nProduct Company\t\t: %s",st.cosmeticproductcomp);
				printf("\nProduct Price \t\t\t: %i",st.cosmeticprice);
				printf("\nProduct Code \t\t: %i",st.cosmeticproductid);
				printf("\nProduct Quantity\t:%i",st.cosmeticquantity);

				printf("\n\n\t*** New Product Record ***");
			do
				{

					fflush(stdin);
					printf("\nEnter New Product Name\t\t: ");
					gets(st.cosmeticproductname); // get input string
					st.cosmeticproductname[0]=toupper(st.cosmeticproductname[0]);
					//iterate for every character in string
					for (ind=0; ind<strlen(st.cosmeticproductname); ++ind)
					{	//check if character is val or not
						if(isalpha(st.cosmeticproductname[ind]) )
							val = 1;
						else
						{
							val = 0;
							break;
						}
					}
					if (!val)
					{
						printf("\n Name contains invalid characters. Please 'Enter' the name again");
						getch();


					}
				}while(!val);	//while end here


				//Product Company
				do
				{
					char cosmeticproductcomp[40];
					fflush(stdin);
					printf("\nEnter New Product Company\t\t:");
					gets(st.cosmeticproductcomp); // get input string
					st.cosmeticproductcomp[0]=toupper(st.cosmeticproductcomp[0]);
					//iterate for every character in string
					for (ind=0; ind<strlen(st.cosmeticproductcomp); ++ind)
					{	//check if character is val or not
						if(isalpha(st.cosmeticproductcomp[ind]))
							val = 1;
						else
						{
							val = 0;
							break;
						}
					}
					if (!val)
					{
						printf("\n Name contains invalid characters. Please 'Enter' the Product Company again");
						getch();


					}
				}while(!val);

					
				printf("\nNew Price Rupees:");
				scanf("%i",&st.cosmeticprice);
				

				printf("\nEnter New Product Code\t\t:");
				scanf("%i",&st.cosmeticproductid);

				
				printf("\nNew Quantity [1-500]\t:");
				scanf("%i",&st.cosmeticquantity);
				


				printf("Press 'y' to Edit the existing record or any key to cancel...");
				Edit=getche();
				if(Edit=='y' || Edit=='Y')
				{
					fprintf(rp,"%s %s %i %i %i\n", st.cosmeticproductname, st.cosmeticproductcomp, st.cosmeticprice, st.cosmeticproductid,st.cosmeticquantity);
					fflush(stdin);
					printf("\n\n\t\tYOUR RECORD IS SUCCESSFULLY EDITED!!!");
				}
			}
			else
			{
				fprintf(rp,"%s %s %i %i %i\n", st.cosmeticproductname, st.cosmeticproductcomp, st.cosmeticprice, st.cosmeticproductid,st.cosmeticquantity);
				fflush(stdin);
			}

		}
		if(!a)
		{
			printf("\n\nTHIS PRODUCT DOESN'T EXIST!!!!");
		}
		fclose(rp);
		fclose(fp);
		remove("ViewStorage.dat");
		rename("DeletedStorage.dat","ViewStorage.dat");
		getch();
	}

}
