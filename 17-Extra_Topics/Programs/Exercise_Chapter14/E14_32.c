/*E14.32*/
#include<stdio.h>
int main(void)
{
	unsigned num=0xf000000f;
	printf("%d\n",count1(num));
	printf("%d\n",count2(num));
	printf("%d\n",count3(num));
	printf("%d\n",count4(num));
	return 0;
}
int count1(unsigned x)
{
	int count=0;
	while(x!=0)	
	{
		count++;
		x=x&(x-1);  
	}
	return count;
}
int count2(int x)
{
	return 32-count1(x);
}
int count3(int x)
{
	return count1(~x);
}
int count4(int x)
{
    int c=0;
    for(x=~x; x!=0; x=x&(x-1))
		c++;
	return c;
}
