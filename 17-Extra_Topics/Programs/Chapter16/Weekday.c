void weekDay(char *date,char *dayWeek)
{
	int d,m,y,j,f,h,fh,day;
	splitDate(date,&y,&m,&d);
	j=julian(d,m,y);
	f=(y-1)/4;
	h=(y-1)/100;
	fh=(y-1)/400;
	day=(y+j+f-h+fh)%7;
	switch(day)
	{
		case 0: strcpy(dayWeek,"Saturday");  break;
		case 1: strcpy(dayWeek,"Sunday");	 break;
		case 2: strcpy(dayWeek,"Monday");    break;
		case 3: strcpy(dayWeek,"Tuesday");   break;
		case 4: strcpy(dayWeek,"Wednesday"); break;
		case 5: strcpy(dayWeek,"Thursday");  break;
		case 6: strcpy(dayWeek,"Friday");    break;
	}
}/*End of weekDay()*/