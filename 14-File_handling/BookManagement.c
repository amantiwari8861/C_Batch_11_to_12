/* Write a program to manage a database of books*/
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

void insert(FILE *fp);	
void del(FILE *fp);
void modify(FILE *fp);
void booksold(FILE *fp);
int search(FILE *fp,char *name);
void display(FILE *fp);
void list(FILE *fp);

struct 
{
	char name[50];
	int ncopies;
	float cost;
}book;

int main()
{
	int choice;
	FILE *fp;
	fp = fopen("books.dat","rb+");
	if(fp==NULL)
	{
		fp=fopen("books.dat","wb+");
		if(fp==NULL)
		{
			printf("Error in opening or creating file\n");
			exit(1);
		}
	}
	while(1)
	{
		
		printf("\n\n1.Insert a new record\n");
		printf("2.Delete a record\n");
		printf("3.Display record of a book\n");
		printf("4.Modify an existing record\n");
		printf("5.List all records\n");
		printf("6 Book sold\n");
		printf("7.Exit\n");
		printf("Enter your choice : ");
		scanf("%d%*c",&choice);

		switch(choice)
		{
			case 1:
				insert(fp);
				break;
			case 2:
				del(fp);
				break;
			case 3:
				display(fp);
				break;
			case 4:
				modify(fp);
				break;
			case 5:
				list(fp);
				break;
			case 6:
				booksold(fp);
				break;
			case 7:
				fclose(fp);
				exit(0);
			default :
				printf("Wrong choice\n");
		}/*End of switch */
	}/*End of while */
	return 0;
}/*End of main( ) */

void insert(FILE *fp)
{
	fseek(fp,0,SEEK_END);
	printf("Enter book name : ");
	scanf("%[^\n]s",book.name);
	printf("Enter number of copies : ");
	scanf("%d",&book.ncopies);
	printf("Enter cost of book : ");
	scanf("%f",&book.cost);
	int status=fwrite(&book,sizeof(book),1,fp);
	if (status>0)
	{
		printf("book added succesfully!!!\n");
	}
	else
	{
		printf("unable to add book!!!\n");
	}
}/*End of insert()*/

void del(FILE *fp)
{
	FILE *fptmp;
	char name[20];
	printf("Enter the name of book to be deleted from database : ");
	scanf("%[^\n]s",name);
	if(search(fp,name)==0)
		return;
	fptmp = fopen("tempfile.dat","wb");
	rewind(fp);
	while(fread(&book, sizeof(book),1,fp) == 1)
	{
		if(strcmp(name,book.name)!=0)
			fwrite(&book,sizeof(book),1,fptmp);
	}
	fclose(fp);
	fclose(fptmp);
	remove("books.dat");
	rename("tempfile.dat","books.dat");
	printf("\nRecord deleted........\n\n");
	fp = fopen("books.dat", "rb+");
}/*End of del()*/

void modify(FILE *fp)
{
	char name[50];
	long size = sizeof(book);
	printf("Enter the name of the book to be modified : ");
	scanf("%[^\n]s",name);
	fflush(stdin);
	if(search(fp,name) == 1)
	{
		printf("Enter new data-->\n\n");
		printf("Enter book name : ");
		scanf("%[^\n]s",book.name);
		printf("Enter number of copies : ");
		scanf("%d",&book.ncopies);
		printf("Enter cost of book : ");
		scanf("%f",&book.cost);
		fseek(fp,-size,1);
		fwrite(&book,sizeof(book),1,fp);
		printf("\nRecord successfully modified\n\n");
	}
}/*End of modify()*/

void booksold(FILE *fp)
{
	char name[50];
	printf("Enter the name of the book to be sold : ");
	scanf("%[^\n]s", name);
	if(search(fp,name)==1)
	{
		if(book.ncopies >0)
		{
			book.ncopies--;
			fseek(fp,(long)-sizeof(book), 1);
			fwrite(&book,sizeof(book), 1, fp);
			printf("One book sold\n");
			printf("Now number of copies = %d\n", book.ncopies);
		}
		else
			printf("Book is out of stock\n\n");
	}
}/*End of booksold( )*/

void display(FILE *fp)
{
	char name[50];
	printf("Enter the name of the book : ");
	scanf("%[^\n]s",name);
	if(search(fp,name)==1)
	{
		printf("\nName\t%s\n",book.name);
		printf("Copies\t%d\n",book.ncopies);
		printf("Cost\t%f\n\n",book.cost);
	}
}/*End of display()*/

int search(FILE *fp,char *name)
{
	int flag=0;
	rewind(fp);
	while(fread(&book, sizeof(book),1,fp)==1)
	{
		if(strcmp(name,book.name)==0)
		{
			flag = 1;
			break;
		}
	}
	if(flag == 0)
		printf("\nName not found in file\n\n");
	return flag;
}/*End of search()*/

void list(FILE *fp)
{
	rewind(fp);
	printf("\n%-20s %-20s %-20s \n","   NAME","   COPIES","   COST");
	printf("%-20s %-20s %-20s \n","   ----","   ------","   ------");
	
	while(fread(&book, sizeof(book),1,fp)==1)
	{
		printf("%-20s",book.name);
		printf("%-20d",book.ncopies);
		printf("%-20f",book.cost);
		printf("\n");
	}
}/*End of list()*/