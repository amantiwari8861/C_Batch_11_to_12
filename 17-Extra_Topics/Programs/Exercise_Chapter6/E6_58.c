/*E6.58*/
#include<stdio.h>
int findJulian(int d,int m,int y);
int isLeap(int y);
int main(void)
{
	int day,month,year;
	printf("Enter date(dd/mm/yyyy): ");
	scanf("%d/%d/%d",&day,&month,&year);
	printf("Julian Day = %d\n",findJulian(day,month,year));
	return 0;
}/*End of main()*/

int findJulian(int d,int m,int y)
{
	int j=d;
	switch(m-1)
	{
		case 11:   j+=30;	/*Fall thru in all cases*/
		case 10:   j+=31;
		case 9:    j+=30;
		case 8:    j+=31;
		case 7:    j+=31;
		case 6:    j+=30;
		case 5:    j+=31;
		case 4:    j+=30;
		case 3:    j+=31;
		case 2:    j+=28;
		case 1:    j+=31;
	}
	if( isLeap(y) && m>2 )
			j=j+1;
	return j;
}
int isLeap(int y)
{
	if(y%100!=0 && y%100!=0 || y%400==0)
		return 1;
	return 0;
}