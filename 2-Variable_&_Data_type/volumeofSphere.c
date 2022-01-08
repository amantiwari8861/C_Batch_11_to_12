#include<stdio.h>
int main()
{
	//volume of sphere => 4/3*pi*r*r*r;
	
	float r,pi=3.14,result;
	
	printf("enter the radius :");
	scanf("%f",&r);// 2.5
	
	result= (4.0/3.0)*pi*r*r*r; //65.42
	
	printf("the volume of sphere is %f \n",result);

	return 0;
}
