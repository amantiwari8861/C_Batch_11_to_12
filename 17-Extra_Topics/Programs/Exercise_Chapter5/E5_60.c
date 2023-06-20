/*E5_60*/
#include<stdio.h>
int main(void)
{
	int i,m1,m2,m3,total,rno,maxtotal=0,maxrno,count;

	count=0;
	for(i=1; i<=10; i++)
	{
		do
		{
			printf("Enter roll number(1000-9999) : ");
			scanf("%d",&rno);
		}while(rno < 1000 || rno > 9999 );

		printf("Enter marks of three subjects : ");
		scanf("%d%d%d",&m1,&m2,&m3);

		if( m1<40 || m2<40 || m3<40 )
			continue;
      
		total=m1+m2+m3;
		if(total > 200)
			count++;
		if(maxtotal==0 || total > maxtotal)/*maxtotal==0 should be written first*/
		{
			maxtotal=total;
			maxrno=rno;
		}
	}
	printf("%d students got more than 200 marks\n",count);
	printf("Student with roll no. %d got highest marks %d\n",maxrno,maxtotal);
	return 0;
}
