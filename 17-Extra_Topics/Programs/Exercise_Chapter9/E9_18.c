/*E9.18*/                                                                               
#include<stdio.h>
int main(void)
{
	float a=5,*p,**pp;
	p=&a;	
	pp=&p; 
	printf("a=%f, p=%p, pp=%p\n",a,p,pp);
	a=a+1;
	p=p+1;
	pp=pp+1;
	printf("a=%f, p=%p, pp=%p\n",a,p,pp);
	return 0;
}
                                                                               
