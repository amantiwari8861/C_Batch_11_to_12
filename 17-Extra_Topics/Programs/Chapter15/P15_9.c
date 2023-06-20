/*P15.9 Program that uses a function similar to printf()*/
#include<stdarg.h>
#include<stdio.h>
#include<string.h>
void i_to_str(int num,char str[],int b);
void d_to_str(double num,char str[]);
void print(char *format,...);
int main(void)
{
	int a=125;
	float b=563.66;
	char c='Q';
	char name[10]="Ranju";
	print("Value of a in binary = %b\n",a);
	print("Value of a in octal = %o\n",a);
	print("Value of a in decimal = %d\n",a);
	print("Value of a in hexadecimal = %x\n",a);
	print("Value of b = %f\n",b);
	print("Value of c = %c\n",c);
	print("Value of name = %s\n",name);
	return 0;
}
void print(char *format,...)
{
	char *p,str[50],*ptr;
	int k;
	float l;
	va_list ap;
	va_start(ap,format);

	for(p=format; *p!='\0'; p++)
	{
		if((*p)=='%')
		{
			p++;
			switch(*p)
			{
			case 'b':
				k = va_arg(ap,int);
				i_to_str(k,str,2);
				fputs(str,stdout);
				break;
			case 'd':
				k = va_arg(ap,int);
				i_to_str(k,str,10);
				fputs(str,stdout);
				break;
			case 'o':
				k = va_arg(ap,int);
				i_to_str(k,str,8);
				fputs(str,stdout);
				break;
			case 'x':
				k = va_arg(ap, int);
				i_to_str(k,str,16);
				fputs(str,stdout);
				break;
			case 'c':
				k = va_arg(ap,int);
				putchar(k);
				break;
			case 's':
				ptr=va_arg(ap,char *); 
				fputs(ptr,stdout);
				break;
			case 'f':
				l = va_arg(ap,double);
				d_to_str(l,str);
				fputs(str,stdout);
				break;
			case '%':
				putchar('%');
				break;
		}
		}
		else
			putchar(*p);
	}
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