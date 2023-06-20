/*E10.54*/
#include<stdio.h>
#include<ctype.h>
int str_to_i(char *str);
void f(char *s, int *num);
int main(void)
{ 
	char str[10];
	int num;
	printf("Enter a string of numbers :");
	gets(str);
	num=str_to_i(str);
	printf("%d  %s\n",num,str);
	return 0;
}
int str_to_i(char *str)
{
	int num=0;
	f(str,&num);
	return num;
}
void f(char *s, int *pnum) 
{ 
	if(*s=='\0' || !isdigit(*s) ) 
        return; 
	*pnum = (*pnum)*10 + *s-'0'; 
    return f(s+1, pnum); 
} 