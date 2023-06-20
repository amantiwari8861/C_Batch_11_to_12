/*P11.17  Program that uses an array of union to hold values of different data types*/
#include<stdio.h>
union num
{
    int i;
	long int l;
	float f;
	double d;
};
int main(void)
{
	union num arr[10];	/*Size of this array will be 10*sizeof(double)*/
	arr[0].i = 12;
	arr[1].l = 400000;
	arr[2].f = 11.12;
	arr[3].d = 23.34;
	printf("%d\t",arr[0].i);
	printf("%ld\t",arr[1].l);
	printf("%f\t",arr[2].f);
	printf("%f\n",arr[3].d);
	return 0;
}