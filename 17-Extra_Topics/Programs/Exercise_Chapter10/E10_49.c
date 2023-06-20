/*E10.49*/
#include<stdio.h>
#include<string.h>
void reverse_str(char *str); 
void rev(char *s,int size);
int main(void)
{ 
	char str[100]; 
	printf("Enter a string :");
        gets(str);
	reverse_str(str);
	puts(str);
	return 0;
} 
void reverse_str(char *str)
{
	rev(str,strlen(str));
}
void rev(char *str,int size)
{
	char tmp;
	if(size<=1)
		return;
	else
	{
		tmp = str[0];
		str[0] = str[size-1];
		str[size-1] = tmp;
		rev(str+1,size-2);
	}
}
