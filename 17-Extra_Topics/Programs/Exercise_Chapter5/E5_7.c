/*E5_7*/
#include<stdio.h>
int main(void)
{
	int a=0,b=0;
	if(!a)
	{
		b = !a;
		if(b)
			a = !b;
	}
	printf("%d, %d\n",a,b);
	return 0;
}

