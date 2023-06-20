/*E11_8*/
#include<stdio.h>
#include<string.h>
int main(void)
{
	union  tag
	{
	   char name[15];
	   int age;
	}rec;
	strcpy(rec.name,"Somalika");
	rec.age=23;
	printf("Name = %s\n",rec.name);
	return 0;
}
	
