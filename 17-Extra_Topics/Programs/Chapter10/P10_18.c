/*P10.18 */
#include<stdio.h>
#include<string.h>
int main(void)
{
	char str1[10];
	strncpy(str1, "Departmental", 6);
	str1[6]='\0';
	printf("%s\n", str1);
	strncpy(str1, "Dep", 6);
	printf("%s\n", str1);
	return 0;
}