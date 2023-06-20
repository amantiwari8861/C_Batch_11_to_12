/*P10.21*/
#include<stdio.h>
#include<string.h>
int main(void)
{
	char *p;
	p=strchr("Multinational",'n');
	printf("%s\n",p);
	p=strrchr("Multinational",'n');
	printf("%s\n",p);
	return 0;
}
