/*E10.32*/
#include<stdio.h>
#include<ctype.h>
int strCIcmp(char *str1,char *str2);
int main(void)
{
	char str1[50]="Deepali",str2[20]="deePali";
	printf("%d\n",strCIcmp(str1,str2));
	return 0;
}
int strCIcmp(char *str1,char *str2)
{
	while(toupper(*str1) == toupper(*str2))
	{
		if(*str1 == '\0')
			return 0;
		str1++;
		str2++;
	}
	return(toupper(*str1) - toupper(*str2));
}
