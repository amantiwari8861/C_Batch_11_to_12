#include<stdio.h>
#include<stdlib.h>
#include"dtmanip.h"
main()
{
	int choice;
	char date[11],date1[11],date2[11];
	char dayWeek[10],newDate[11];
	int iyear,imonth,dyear,dmonth,days;
	int y,m,d;

	while(1)
	{
		printf("1.  Date validation\n");
		printf("2.  Compare dates\n");
		printf("3.  Difference of Dates in days\n");
		printf("4.  Difference of Dates in years,months,days\n");
		printf("5.  Day of week\n");
		printf("6.  Add years\n");
		printf("7.  Add months\n");
		printf("8.  Add days\n");
		printf("9.  Subtract years\n");
		printf("10. Subtract months\n");
		printf("11. Subtract days\n");
		printf("12. Exit\n");
		printf("Enter your choice : ");
		scanf("%d",&choice);

		switch(choice)
		{
		case 1:
			printf("Enter date(dd/mm/yyyy) :  ");
			scanf("%s",date);
			if(isValid(date))
				printf("Valid date\n");
			else
				printf("Not a Valid Date\n");
			break;
		case 2:
			printf("Enter first date(dd/mm/yyyy) :  ");
			scanf("%s",date1);
			printf("Enter second date(dd/mm/yyyy) :  ");
			scanf("%s",date2);
			if(!isValid(date1) || !isValid(date2))
			{
				printf("Enter only valid dates\n");
				break;
			}
			if(cmpDate(date1,date2)==0)
				printf("Date : %s and Date : %s are same.\n",date1, date2);
			else if(cmpDate(date1,date2)==1)
				printf("Date : %s < Date : %s \n",date1,date2);
			else if(cmpDate(date1,date2)==-1)
				printf("Date : %s > Date : %s \n",date1,date2);
			break;
		case 3:
			printf("Enter first date(dd/mm/yyyy) :  ");
			scanf("%s",date1);
			printf("Enter second date(dd/mm/yyyy) :  ");
			scanf("%s",date2);
			if(!isValid(date1) || !isValid(date2))
			{
				printf("Enter only valid dates\n");
				break;
			}
			if(cmpDate(date1,date2)==1)
				days=diffDays(date1,date2);
			else
				days=diffDays(date2, date1);
			printf("Difference in days = %d\n",days);
			break;
		case 4:
			printf("Enter first date(dd/mm/yyyy) :  ");
			scanf("%s",date1);
			printf("Enter second date(dd/mm/yyyy) :  ");
			scanf("%s",date2);
			if(!isValid(date1) || !isValid(date2))
			{
				printf("Enter only valid dates\n");
				break;
			}
			if(cmpDate(date1,date2)==1)
				diffYMD(date1, date2, &y, &m, &d);
			else
				diffYMD(date2,date1,&y,&m,&d);
			printf("Difference of the two dates is : ");
			printf("%d years %d months %d days\n",y, m, d);
			break;
		case 5:
			printf("Enter date(dd/mm/yyyy) :  ");
			scanf("%s",date);
			weekDay(date,dayWeek);
			printf("Day of week is %s\n",dayWeek);
			break;
		case 6:
			printf("Enter date(dd/mm/yyyy) :  ");
			scanf("%s",date);
			if( !isValid(date))
			{
				printf("Enter a valid date\n");
				break;
			}
			printf("Enter the number of years to be added : ");
			scanf("%d",&iyear);
			addYears(date,iyear,newDate);
			printf("New date is %s\n",newDate);
			break;
		case 7:
			printf("Enter date(dd/mm/yyyy) :  ");
			scanf("%s",date);
			if(!isValid(date))
			{
				printf("Enter a valid date\n");
				break;
			}
			printf("Enter the number of months to be added : ");
			scanf("%d",&imonth);
			addMonths(date,imonth,newDate);
			printf("New date is %s\n",newDate);
			break;
		case 8:
			printf("Enter date(dd/mm/yyyy) :  ");
			scanf("%s",date);
			if(!isValid(date))
			{
				printf("Enter a valid date\n");
				break;
			}
			printf("Enter the number of days to be added : ");
			scanf("%d",&days);
			addDays(date,days,newDate);
			printf("New date is %s\n",newDate);
			break;
		case 9:
			printf("Enter date(dd/mm/yyyy) : ");
			scanf("%s",date);
			if(!isValid(date))
			{
				printf("Enter a valid date\n");
				break;
			}
			printf("Enter the number of years to be subtracted : ");
			scanf("%d",&dyear);
			subYears(date,dyear,newDate);
			printf("New date is %s\n",newDate);
			break;
		case 10:
			printf("Enter date(dd/mm/yyyy) :  ");
			scanf("%s",date);
			if(!isValid(date))
			{
				printf("Enter a valid date\n");
				break;
			}
			printf("Enter the number of months to be subtracted : ");
			scanf("%d",&dmonth);
			subMonths(date,dmonth,newDate);
			printf("New date is %s\n",newDate);
			break;
		case 11:
			printf("Enter date(dd/mm/yyyy) :  ");
			scanf("%s",date);
			if(!isValid(date))
			{
				printf("Enter a valid date\n");
				break;
			}
			printf("Enter the number of days to be subtracted : ");
			scanf("%d",&days);
			subDays(date,days,newDate);
			printf("New date is %s\n",newDate);
			break;
		case 12:
			exit(1);
		default:
			printf("Wrong choice\n");
		}/*End of switch*/
	}/*End of while*/
}/*End of main()*/