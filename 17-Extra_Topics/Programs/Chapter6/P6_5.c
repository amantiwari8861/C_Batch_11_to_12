/*P6.5 Program to understand the use of return statement*/
#include<stdio.h>
void selection(int age,float ht);
int main(void)
{
	int age;
	float ht;
	printf("Enter age and height: ");
	scanf("%d %f",&age,&ht);
	selection(age,ht);	
	return 0;
}
void selection(int age,float ht)
{
	if(age>25)
	{
		printf("Age should be less than 25\n");
		return;
	}
	if(ht<5)
	{
		printf("Height should be more than 5\n");
		return;
	}
	printf("Selected\n");
}