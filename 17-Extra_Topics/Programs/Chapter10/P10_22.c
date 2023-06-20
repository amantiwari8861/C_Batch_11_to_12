/*P10.22*/
#include<stdio.h>
#include<string.h>
int main(void)
{
	char *p1,*p2,*p3;
	p1=strpbrk("abcmnop","lmn");
	p2=strpbrk("abcmnop","ln");
	p3=strpbrk("1234ABCD","COT");
	printf("%s\t%s\t%s\n",p1,p2,p3);
	return 0;
}