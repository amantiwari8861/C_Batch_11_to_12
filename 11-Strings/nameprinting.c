#include<stdio.h>
int main()
{
	int i;
	char name[20];
	printf("enter the name :");
	for(i=0;i<10;i++)
	{
		// scanf("%c%*c",&name[i]);//star between %c means we are discarding an character from end
		scanf("%c",&name[i]);
		fflush(stdin);//to clear the buffer ( to remove extra character except defined format specifiers in scanf)
	}
	printf("----------------\n");
	for(i=0;i<10;i++)
	{
		// printf(" at name[%d] = %c",i,name[i]);
		printf("%c",name[i]);
	}
	return 0;
}