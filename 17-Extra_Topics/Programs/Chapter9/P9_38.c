/*P9.38 Array of function pointers*/
#include<stdio.h>
float add(float,int);
float sub(float,int);
float mul(float,int);
float div(float,int);
int main(void)
{
	int i,b;
	float a;
	float(*fp[])(float,int)={add,sub,mul,div};
	char *operation[]={"Add","Subtract","Multiply","Divide"};

	printf("Enter a float and a integer : " );
	scanf("%f%d",&a,&b);

	for(i=0;i<4;i++)
		printf("%s: %f\n",operation[i],(*fp[i])(a,b));
	return 0;
}
float add(float a,int b)
{
	return a+b;
}
float sub(float a,int b)
{
	return a-b;
}
float mul(float a,int b)
{
	return a*b;
}
float div(float a,int b)
{
	return a/b;
}