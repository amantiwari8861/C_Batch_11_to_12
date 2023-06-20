/*Function to calculate julian days*/
int julian(int d,int m,int y)
{
	int j=d;
	switch(m-1)
	{
		case 11:   j+=30;
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
	if(isLeap(y) && m>2)
		  j=j+1;
	return j;
}/*End of julian()*/

/*Function to get the value of day and month from julian days */
void revJulian(int j,int y,int *d,int *m)
{
	int i;
	int month[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
	if(isLeap(y))
		month[2]=29;
	for(i=1; i<=12; i++)
	{
		if(j<=month[i])
			break;
		j=j-month[i];
	}
	*d=j;
	*m=i;
}/* End of revJulian()*/