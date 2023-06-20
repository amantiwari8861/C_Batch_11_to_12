/*P6.13 Program to find the type and area of a triangle*/
#include<stdio.h>
#include<math.h>
void type(float a,float b,float c);
void area(float a,float b,float c);
int main(void)
{
	float a,b,c;
	printf("Enter the sides of triangle : ");
	scanf("%f%f%f",&a,&b,&c);
	if(a<b+c && b<c+a && c<a+b)
	{
		type(a,b,c);
		area(a,b,c);
	}
	else
		printf("No triangle possible with these sides\n");
	return 0;
}
void type(float a, float b, float c)
{
	if((a*a)+(b*b)==(c*c) || (b*b)+(c*c)==(a*a) || (c*c)+(a*a)==(b*b))
		printf("Right angled triangle\n");
	if(a==b && b==c)
		printf("Equilateral triangle\n");
	else if(a== b || b==c || c==a)
		printf("Isosceles trianlge\n");
	else
		printf("Scalene triangle\n");
}
void area(float a,float b,float c)
{
	float s, area;
	s=(a+b+c)/2;
	area=sqrt(s*(s-a)*(s-b)*(s-c));
	printf("Area of triangle=%f\n",area);
}
