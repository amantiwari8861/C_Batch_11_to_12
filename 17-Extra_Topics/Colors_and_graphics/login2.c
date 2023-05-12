#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void read();
int main()
{
	char user[8],pass[8],empname[10];
	int empid,empsal,hra,da,ta,gross;
	printf("\n\tUsername : ");
	scanf("%s",&user);
	printf("\n\tPassword : ");
	scanf("%s",&pass);
	read();
	return 0;
}
void read()
{
	FILE *out,*fptr;
	fptr=fopen("input.txt","w");
	out=fopen("output.txt","r");
	char sentence,word[15];
	int i=0;
	while(1)
	{
		
		sentence=fgetc(out);
		if(sentence==EOF)
		{
			break;
		}
		word[i]=sentence;
		i++;
	}
	/*
						while(fgets(str,9,fp)!=NULL)
                        {
                            printf("%s",str);
                        }
	while(fread(&l,sizeof(l),1,log))
	{
	if(strcmp(username,l.username)==0 && strcmp(password,l.password)==0)
	{

	    printf("Login Succesful\n");
	}*/
	//fread(sentence,sizeof(int),6,fptr);
	//fread(sentence,2*sizeof(int),strlen(user),fptr);
	if(!strcmp(user,"aman") && !strcmp(pass,"tiwari"))
	{
	printf("\n\t\tEmployee Salary Maintainance\n");
	printf("\n\t_______________________________________\n");
	printf("\nEmployee ID : ");
	scanf("%d",&empid);
	fprintf(fptr,"%d",empid);
	printf("\nEmployee Name : ");
	scanf("%d",&empname);
	fprintf(fptr,"%d",empname);
	printf("\nBasic Salary : ");
	scanf("%d",&empsal);
	fprintf(fptr,"%d",empsal);
	printf("\nHRA : ");
	scanf("%d",&hra);
	printf("\nDA : ");
	scanf("%d",&da);
	printf("\nTA : ");
	scanf("%d",&ta);
	gross=empsal+hra+da+ta;
	printf("\n\t\t\t\tGross Salary : %d",gross);
	
	if(fptr==NULL)
	{
		printf("Error! unable to open file");
		exit(1);
	}
	
	}
	else
	{
		printf("\n\tenter the right id and password\n");
	}
	fclose(out);
}