/*E5_39*/
#include<stdio.h>
int main(void)
{
	int i,z,emp_id;
	i=1,z=0;
    do
    {
		if(i<5)
		{
			printf("%d ",i++);
			z=z+2;
		}
    }while(i<5);
	printf("\n");

	do
    {
		printf("Enter employee ID(100-500) : ");
		scanf("%d", &emp_id);
    }while(emp_id < 100  || emp_id > 500);
	return 0;
}

/*
int main(void)
{
	int i,z,emp_id;
	
	i=1,z=0;	
	while(i<5)
	{
		printf("%d ",i++);
		z=z+2;
	}
	printf("\n");

	printf("Enter employee ID(100-500) : ");
	scanf("%d", &emp_id);
	while(emp_id<100 || emp_id>500)
	{
		printf("Enter employee ID(100-500) : ");
		scanf("%d", &emp_id);
	}
	return 0;
}
*/