void splitDate(char *date,int *y,int *m,int *d)
{
	date[2]=date[5]='\0';
	*d=atoi(date);
	*m=atoi(date+3);
	*y=atoi(date+6);
	date[2]=date[5]='/';
}/*End of splitDate()*/

void formDate(char *date,int y,int m,int d)
{
	char arr[9][3]={"01","02","03","04","05","06","07","08","09"};
	if(d<10)
		strcpy(date,arr[d-1]);
	else
		sprintf(date,"%d",d);
	if(m<10)
		strcpy(date+3,arr[m-1]);
	else
		sprintf(date+3,"%d",m);
	sprintf(date+6,"%d",y);
	date[2]=date[5]='/';
}/*End of formDate()*/