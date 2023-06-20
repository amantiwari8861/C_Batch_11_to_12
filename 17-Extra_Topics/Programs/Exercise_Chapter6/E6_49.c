/*E6.49*/
#include<stdio.h>
float convert(float n, char unitType);
int main(void)
{
	float len;
	printf("Enter length in inches : ");
	scanf("%f",&len);
	printf("Length in cms = %f\n", convert(len, 'i'));  
	printf("Enter length in cms : ");
	scanf("%f",&len);
	printf("Length in inches = %f\n", convert(len, 'c') );  
	return 0;
}
float convert(float n, char unitType)
{
	return unitType=='i' ? n*2.54 : n/2.54;
}