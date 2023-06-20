#include<stdio.h>
#include<string.h>
int main(void)
{
	char *p,x,str[100]="JP Nagar Bangalore, Vijaynagar Bangalore, Jaynagar Bangalore";
	p=strstr(str,"Bangalore");
	while(p!=NULL)
	{
    	x=p[9];
		strcpy(p,"Bengaluru");
		p[9]=x; /*we dont need the '\0' character written by strcpy()*/
		p=strstr(str,"Bangalore");
	}
	puts(str);
	return 0;
}