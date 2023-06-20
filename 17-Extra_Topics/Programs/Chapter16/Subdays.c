/* To subtract days from a date*/
void subDays(char *date,int days,char *newDate)
{
	int d1,m1,y1,d2,m2,y2;
	int j1,j2,x,k;
	splitDate(date,&y1,&m1,&d1);
	j1=julian(d1,m1,y1);
	if(days<j1)
	{
		j2=j1-days;
		y2=y1;
	}
	else
	{
		days=days-j1;   /*Now subtract days from 1st Jan y1*/
		y2=y1-1;
		k = isLeap(y2) ? 366 : 365;
		while(days>=k )
		{
			if(isLeap(y2))
				days=days-366;
			else
				days=days-365;
			y2--;
			k = isLeap(y2) ? 366 : 365;
		}
		j2=isLeap(y2) ? 366-days : 365-days;
	}
	revJulian(j2,y2,&d2,&m2);
	formDate(newDate,y2,m2,d2);
}/*End of subDays()*/