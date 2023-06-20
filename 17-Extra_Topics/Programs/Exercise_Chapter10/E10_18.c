/*E10.18*/
#include<stdio.h>
#include<string.h>
int main(void)
{
	char name[15]="Vikramaditya";
	int i=0;
	while(name[i])
	{
		printf("%c ",name[i]);
		i=i+3;
	}
	return 0;
}
