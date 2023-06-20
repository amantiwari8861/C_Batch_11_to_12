/*P5.7 Program to find out the grade of a student when the marks of 4 subjects are given. 
The method of assigning grade is -
percentage>=85 						grade=A
percentage<85  and percentage>=70	grade=B
percentage<70  and percentage>=55	grade=C
percentage<55  and percentage>=40	grade=D
percentage<40						grade=E
*/
#include<stdio.h>
int main(void)
{
	float m1,m2,m3,m4,total,per;
	char grade;
	printf("Enter marks of 4 subjects : ");
	scanf("%f%f%f%f",&m1,&m2,&m3,&m4);
	total=m1+m2+m3+m4;

	per=total/4;
	if(per>=85)
		grade='A';
	else if(per>=70)
		grade='B';
	else if(per>=55)
		grade='C';
	else if(per>=40)
		grade='D';
	else
		grade='E';
	printf("Percentage is %f,Grade is %c\n",per,grade);
	return 0;
}