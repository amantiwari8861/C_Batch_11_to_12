/*P10.24*/
#include<stdio.h>
#include<string.h>
int main(void)
{
	char str[]="...why?but;not?oh!, where	when";
	char seps[] = "?!;,. \t";
	char *t;
	t=strtok(str, seps);
	while(t!=NULL)
	{
        printf("%s ",t);
		t=strtok(NULL, seps);
	}
	return 0;
}