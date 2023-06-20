/*P10.9 Nesting of strcat() and strcpy() functions */
#include<stdio.h>
#include<string.h>
int main(void)
{ 
	char str1[30] = "Subhash  ";
	char str2[10] = "Chandra  ";
	char str3[20];
	strcat(strcat(str1, str2),"Bose");
	printf("str1 - %s\n",str1);
	strcat(strcpy(str3,"Dev"), "anshi");
	printf("str3 - %s\n",str3);
	return 0;
}
