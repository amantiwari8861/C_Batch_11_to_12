/*E10.45*/
#include<stdio.h>
#include<string.h>
void func(char *str1, char *str2);
int main(void)
{
	char str1[100],str2[100];
	strcpy(str1,"Deepali Sri");strcpy(str2,"Suresh Sri");
	func(str1,str2);
	puts(str1);
	puts(str2);
	return 0;
}
void func(char *str1, char *str2)
{
	char str3[80],str4[80];
	int i,j,k,len1,len2;
	len1=strlen(str1);
	len2=strlen(str2);
	k=0;
	for(i=0; i<len1; i++)
	{
		for(j=0; j<len2; j++)
			if(str1[i] == str2[j])
				break;
		if(j==len2)
			str3[k++] = str1[i];
	}
	str3[k]='\0';
	
	k=0;
	for(i=0; i<len2; i++)
	{
		for(j=0; j<len1; j++)
			if(str2[i]==str1[j])
				break;
		if(j==len1)
			str4[k++]=str2[i];
	}
	str4[k] = '\0';
	strcpy(str1,str3);
	strcpy(str2,str4);
}
