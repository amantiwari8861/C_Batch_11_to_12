/*P10.39*/
#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<math.h>
int str_to_i(char str[]);
double str_to_d(char str[]);
int main(void)
{
	char str[20];
	printf("Enter a string : ");
	scanf("%s",str);
	printf("%d\n",str_to_i(str));

	printf("Enter a string : ");
	scanf("%s",str);
	printf("%lf\n",str_to_d(str));
	return 0;
}

int str_to_i(char str[])
{
	int i,num=0,sign;
	i=0;

	while(isspace(str[i]))/*Skip Initial white spaces*/
		i++;
	sign = (str[i]=='-') ? -1 : 1;

	if(str[i]=='-' || str[i]=='+')
		i++;
	while(isdigit(str[i]))
			num = num*10+(str[i++]-'0');
	return sign*num;
}

double str_to_d(char str[])
{
	int i=0,j,sign;
	double num=0;

	while(isspace(str[i]))/*Skip Initial white spaces*/
		i++;
	sign = (str[i]=='-') ? -1 : 1;
	if(str[i]=='-' || str[i]== '+')
		i++;
	while(isdigit(str[i]))
			num = num*10+(str[i++]-'0');
	if(str[i]=='.')
		i++;
    j=i;
	while(isdigit(str[i]))
			num = num*10+(str[i++]-'0');
	return sign*num/pow(10,i-j);
}