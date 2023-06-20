/*To get difference of two dates in years, months and days*/
void diffYMD(char *date1, char *date2,int *y,int *m,int *d)
{
	int d1,m1,y1,d2,m2,y2;
	splitDate(date1,&y1,&m1,&d1);
	splitDate(date2,&y2,&m2,&d2);
	if(d2<d1)
	{
		if(m2==3)
		{
			if(isLeap(y2))
				d2=d2+29;
			else
				d2=d2+28;
		}
		else if(m2==5 || m2==7 || m2==10 || m2==12)
			d2=d2+30;
		else
			d2=d2+31;
		m2=m2-1;
	}
	if(m2<m1)
	{
		y2=y2-1;
		m2=m2+12;
	}
	*y=y2-y1;
	*m=m2-m1;
	*d=d2-d1;
}/*End of diffYMD()*/
