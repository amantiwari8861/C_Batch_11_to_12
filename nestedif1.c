#include<stdio.h>
int main()
{
	//nested if
	int age;
	printf("enter age : ");
	scanf("%d",&age);
	
	if(age>=0 && age<=150)
	{
		printf("this is a valid age \n");
		if(age<18)
		{
			printf("not ready to vote\n");
			if(age<5)
			{
				printf("kids not allowed\n");
			}
			else if(age<14)
			{
				printf("childrens not allowed\n");
			}
			else
			{
				printf("teenagers not allowed\n");
			}
		}
		printf("work done !");
	}
	else
	{
		printf("invalid age ");
	}
	return 0;
}

