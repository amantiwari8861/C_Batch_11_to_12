/*E5_40*/
#include<stdio.h>
int main(void)
{
	int l,b,h,sarea,vol;

	printf("Enter length, width,height of a cubiod : ");
   	scanf("%d%d%d",&l,&b,&h);
   	while(l<=0 || b<=0 || h<=0)
	{
	     printf("Enter length,width,height of a cubiod : ");
	     scanf("%d%d%d",&l,&b,&h);
    }
	sarea=2*(l*b + b*h + h*l);
	vol=l*b*h;
	printf("Surface Area=%d, Volume=%d\n",sarea,vol);
	return 0;
}

/*
int main(void)
{
	int l,b,h,sarea,vol;
	do
	{
	     printf("Enter length, width,height of a cubiod : ");
	     scanf("%d%d%d",&l,&b,&h);
	}while(l<=0 || b<=0 || h<=0);
	sarea=2*(l*b + b*h + h*l);
	vol=l*b*h;
	printf("Surface Area=%d, Volume=%d\n",sarea,vol);
	return 0;
}
*/
