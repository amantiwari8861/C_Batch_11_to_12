/*To subtract months from a date*/
void subMonths(char *date,int dmonth,char *newDate)
{
	int d,m,y,quot,rem;
	splitDate(date,&y,&m,&d);
	quot=dmonth/12;
	rem=dmonth%12;
	y=y-quot;
	m=m-rem;
	if(m<=0)
	{
		y=y-1;
		m=m+12;
	}
	if(m==2 && d>=29)
	{
		if(!isLeap(y))
			d=28;
		if(isLeap(y))
			d=29;
	}
	if((m==4 || m==6 || m==9 || m==11) && d==31)
		d=30;
	formDate(newDate,y,m,d);
}/*End of subMonths()*/