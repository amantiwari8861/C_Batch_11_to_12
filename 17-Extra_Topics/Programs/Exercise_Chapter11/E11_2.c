/*E11_2*/
#include<stdio.h>
#include<stdlib.h>
int main(void)
{
	struct  rec
	{
	    char *name;
		int age;
	}*ptr;
	char name[10]="Somalika";
	ptr=(struct rec *)malloc(sizeof(struct rec));
	ptr->name=name;
	ptr->age=93;
	printf("%s\t",ptr->name);
	printf("%d\n",ptr->age);
	return 0;
}