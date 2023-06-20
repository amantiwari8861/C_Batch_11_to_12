/*To compare two dates*/
int cmpDate(char *date1,char *date2)
{
	int d1,m1,y1,d2,m2,y2;
	splitDate(date1,&y1,&m1,&d1);
	splitDate(date2,&y2,&m2,&d2);

	if(y1<y2)
		return 1;
	if(y1>y2)
		return -1;
	if(m1<m2)
		return 1;
	if(m1>m2)
		return -1;
	if(d1<d2)
		return 1;
	if(d1>d2)
		return -1;
	return 0;
}/*End of cmpDate()*/