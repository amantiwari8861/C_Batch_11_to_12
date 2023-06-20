/*E11_14*/
#include<stdio.h>
#define N 5
struct train
{
	char name[20];
	int hr;
	int min;
	char m;
};
int main(void)
{
	struct train t[5];
	int i;
	for(i=0; i<5; i++)
	{
		printf("Enter name : ");
		scanf("%s",t[i].name);
		printf("Enter arrival time(hh:mm A/P) : ");
		scanf("%d : %d %c",&t[i].hr, &t[i].min,&t[i].m);
	}
	for(i=0; i<5; i++)
	{
		printf("%s\t",t[i].name);
		t[i].m=='A' ?  printf("%d",t[i].hr) : printf("%d",t[i].hr+12);
		printf(":%d\n",t[i].min);
	}
	return 0;
}
