/*P13.12 Program to understand the use of stringizing operator*/
#include<stdio.h>
#define SHOW(var,format)  printf(#var"=%"#format"\n",var);
int main(void)
{
	int x=9;     
	float y=2.5;    
	char z='$';
	SHOW(x,d);
	SHOW(y,0.2f);
	SHOW(z,c);
	SHOW(x*y,0.2f);
	return 0;
}