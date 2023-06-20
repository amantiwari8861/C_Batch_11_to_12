int diffDays(char *date1,char *date2)
{
	int d1,m1,y1,d2,m2,y2,j1,j2;
	int y,d,i,days;
	d=0;
	splitDate(date1,&y1,&m1,&d1);
	splitDate(date2,&y2,&m2,&d2);
	j1=julian(d1,m1,y1);
	j2=julian(d2,m2,y2);
	if(y1==y2)
		return j2-j1;
	for(i=y1+1; i<=y2-1; i++)
	{
		if(isLeap(i))
			d=d+366;
		else
			d=d+365;
	}
	if(isLeap(y1))
		days=(366-j1)+d+j2;
	else
		days=(365-j1)+d+j2;
	return days;
}/*End of diffDays()*/