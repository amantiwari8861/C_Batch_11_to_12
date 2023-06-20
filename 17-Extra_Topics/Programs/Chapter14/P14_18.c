/*P14.18*/
#include<stdio.h>
unsigned mult(unsigned int num,unsigned int n,int *err);
int main(void)
{
	unsigned int num,n,err=0,result;

	printf("Enter the number and power of 2  :  ");
	scanf("%u%u",&num,&n);
	
	result=mult(num,n,&err);
	if(err==1)
		printf("Overflow\n");
	else
		printf("Result=%u\n",result);
	return 0;
}
unsigned mult(unsigned int num,unsigned int n,int *err)
{
	unsigned int result=num;
	while(n>0)
	{
		num=num<<1;   /*Multiply by 2*/
		n--;
		if(num<result) /*unsigned integer overflow wraps around*/
		{
			*err=1;
			break;
		}
		result=num;
	}
	return result;
}