/*E11_13*/
#include<stdio.h>
#include<limits.h>
#define N 5
struct person
{
	char name[20];
	int age;
	char city[50];
};
int main(void)
{
	struct person p[5],eldestP;
	int i,max=INT_MIN;

	for(i=0; i<5; i++)
	{
		printf("Enter name : ");
		scanf("%s",p[i].name);
		printf("Enter age : ");
		scanf("%d",&p[i].age);
		printf("Enter city : ");
		scanf("%s",p[i].city);
		if(p[i].age > max)
		{
			max=p[i].age;
			eldestP=p[i];
		}
	}
	printf("%s %d %s\n",eldestP.name,eldestP.age,eldestP.city);
	return 0;
}