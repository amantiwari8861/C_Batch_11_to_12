/*P10.40*/ 
#include<stdio.h>
#include<string.h>
void i_to_str(int num,char str[],int base);
void d_to_str(double num,char str[]);
int main(void)
{
	char str1[30];
	i_to_str(45,str1,16);puts(str1);
	i_to_str(45,str1,10);puts(str1);
	i_to_str(45,str1,8);puts(str1);
	i_to_str(45,str1,2);puts(str1);
	i_to_str(-45,str1,10);puts(str1);
	d_to_str(27.647611,str1); puts(str1);
	d_to_str(-12.345622,str1); puts(str1);
	return 0;
}
void i_to_str(int num,char str[],int b)
{
	int i=0,temp,rem,j,sign;

	sign = num<0? -1: 1;
	if(sign==-1)
		num=-num;
	while(num>0)
	{
		rem = num%b;
		num/=b;
		if(rem>9 && rem<16)
			str[i++]= rem-10+'A';
		else
			str[i++]=rem+'0';
	}
	if(sign==-1)
		str[i++]='-';
	str[i]='\0';

	for(i=0,j=strlen(str)-1; i<j; i++,j--) /*Reverse the string*/
	{
		temp = str[i];
		str[i] = str[j];
		str[j] = temp;
	}
}
void d_to_str(double num,char str[])
{
	int i,k;
	double d;
	i=num;
	i_to_str(i,str,10);
	str[strlen(str)+1] = '\0';
	str[strlen(str)] = '.';
	d = num-i;
	k = d*1000000;	
	if(k<0)
		k=-k;
	i_to_str(k,str+strlen(str),10);
}