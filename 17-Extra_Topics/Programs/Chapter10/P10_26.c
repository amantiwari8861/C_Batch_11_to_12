/*P10.26 sprintf() function */
#include<stdio.h>
int main(void)
{
	char str[50];
	char name[10]="Suresh";
	int m1=89,m2=78,m3=80;
	float per=(m1+m2+m3)/3.0;
	char gr='A';
	sprintf(str,"Result-%s %d %d %d %.2f %c\n",name,m1,m2,m3,per,gr);
	printf("The string str is :  %s\n",str);
	return 0;
}
