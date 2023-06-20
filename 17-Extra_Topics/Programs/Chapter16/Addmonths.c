/*To add months to a date*/
void addMonths(char *date,int imonth,char *newDate)
{
	int d,m,y,quot,rem;
	splitDate(date, &y, &m,&d);
	quot=imonth/12;
	rem=imonth%12;
	y=y+quot;
	m=m+rem;
	if(m>12)
	{
		y=y+1;
		m=m-12;
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
}/*End of addMonths()*/
