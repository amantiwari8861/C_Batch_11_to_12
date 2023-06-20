/*P10.28 sscanf() function*/
#include<stdio.h>
int main(void)
{
	char name[10];
	int age;
	float sal;
	char str[30]="Shravani 23 28000.0";
	sscanf(str,"%s%d%f",name,&age,&sal);
	printf("Name   : %s\n",name);
	printf("Age    : %d\n",age);
	printf("Salary : %.2f\n",sal);
	return 0;
}