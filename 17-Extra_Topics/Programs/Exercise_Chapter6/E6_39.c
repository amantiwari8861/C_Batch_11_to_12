/*E6.39*/
#include<stdio.h>
char findGrade(int m1,int m2,int m3,int m4);
char findGrade1(int m1,int m2,int m3,int m4);
int main(void)
{
	int m1,m2,m3,m4;
	printf("Enter m1,m2,m3,m4 : ");
	scanf("%d%d%d%d",&m1,&m2,&m3,&m4);
	printf("%c  ",findGrade(m1,m2,m3,m4));
	printf("%c  ",findGrade1(m1,m2,m3,m4));
	return 0;
}
char findGrade(int m1,int m2,int m3,int m4)
{
	float total,per;
	total = m1+m2+m3+m4;
	per = total/4;
	if(per>=85)
		return 'A';
	else if(per>=70)
		return 'B';
	else if(per>=55)
		return 'C';
	else if(per>=40)
		return 'D';
	else
		return 'E';
}
char findGrade1(int m1,int m2,int m3,int m4)
{
   	float total,per;
	total = m1+m2+m3+m4;
	per = total/4;
	if(per>=85)
		return 'A';
	if(per>=70)
		return 'B';
	if(per>=55)
		return 'C';
	if(per>=40)
		return 'D';
	return 'E';
}