/*E11_15*/
#include<stdio.h>
#include<string.h>
#define N 5

struct employee
{
   char name[20];
   int age;
   int salary;
};	

void sort(struct employee emp[]);
void display(struct employee emp[]);

int main(void)
{
	struct employee emp[N];
	int i;
	for(i=0; i<N; i++)
	{
		printf("Enter name :");
		scanf("%s",emp[i].name);
		printf("Enter age : ");
		scanf("%d", &emp[i].age);
		printf("Enter salary : ");
		scanf("%d", &emp[i].salary);
		printf("\n");
	}
	display(emp);
	sort(emp);
	display(emp);
	return 0;
}
void sort(struct employee emp[])
{
	struct employee temp;
	int i,j;
	for(i=0; i<N-1; i++)
	  for(j=i+1; j<N; j++)
	    if(strcmp(emp[i].name, emp[j].name) > 0 )
	    {
			temp = emp[i];
			emp[i] = emp[j];
			emp[j] = temp;
		}
}
void display(struct employee emp[])
{
	int i;
	for(i=0; i<N; i++)
	{
		printf("%s\t\t",emp[i].name);
		printf("%d\t", emp[i].age);
		printf("%d\n", emp[i].salary);
	}
	printf("\n");
}