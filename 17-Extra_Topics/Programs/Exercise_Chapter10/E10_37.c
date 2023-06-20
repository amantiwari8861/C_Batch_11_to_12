/*E10.37*/
#include<stdio.h>
#include<string.h>
void extract(char *str1,int i,int n,char *str2);
int main(void)
{
	char str1[50],str2[50];
	strcpy(str1,"Srivastava");
	extract(str1,3,6,str2);
	puts(str2);
	return 0;
}
void extract(char *str1,int i, int n, char *str2)
{
	int j,k;
	j=0;
	while(str1[j]!='\0' && j<i)
		j++;
	for(k=0; k<n; k++,j++)
		str2[k]=str1[j];
	str2[k]='\0';
}
