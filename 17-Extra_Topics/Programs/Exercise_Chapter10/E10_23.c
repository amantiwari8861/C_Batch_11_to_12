/*E10.23*/
#include<stdio.h>
int main(void)
{
	int d1,m1,y1;
	char date[11]="24/05/1973";
	date[2]=date[5]='\0';
	sscanf(date,"%d",&d1);
	sscanf(date+3,"%d",&m1);
	sscanf(date+6,"%d",&y1);
	date[2]=date[5]='/';
	printf("d1=%d,m1=%d,y1=%d\n",d1,m1,y1);
	printf("date=%s\n",date);
	return 0;
}