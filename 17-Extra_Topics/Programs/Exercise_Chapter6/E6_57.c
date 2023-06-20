/*E6.57*/
#include<stdio.h>
int main(void)
{
	int d1,m1,y1,d2,m2,y2,c;
	printf("Enter Date1(dd/mm/yyyy): ");
	scanf("%d/%d/%d",&d1,&m1,&y1);
	printf("Enter Date2(dd/mm/yyyy): ");
	scanf("%d/%d/%d",&d2,&m2,&y2);
	c=cmpdate(d1,m1,y1,d2,m2,y2);
	
	if(c==1)
		printf("Date 1 is before Date 2\n");
	else if(c==-1)
		printf("Date 2 is before Date 1\n");
	else
		printf("Dates are same\n");  
	return 0;
}
int cmpdate(int d1, int m1, int y1, int d2, int m2, int y2)
{
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
}
