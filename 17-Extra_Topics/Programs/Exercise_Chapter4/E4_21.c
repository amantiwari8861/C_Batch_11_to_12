/*E4.21*/
#include<stdio.h>
int main(void)
{
	float r,area,perimeter;
	printf("Enter radius of the circle : ");
	scanf("%f",&r);
	area = 22.0/7 * r * r;
	perimeter = 2 * 22.0/7 * r;
	printf("Area=%f, Perimeter=%f\n",area,perimeter);
	return 0;
}