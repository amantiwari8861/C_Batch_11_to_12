/*P5.34 Program to perform arithmetic calculations on integers*/
#include<stdio.h>
int main(void)
{
	char op;
	int  a,b;
	printf("Enter number,operator and another number : ");
	scanf("%d%c%d",&a,&op,&b);
	switch(op)
	{
		case '+':
			printf("Result = %d\n",a+b);
			break;
		case '-':
			printf("Result = %d\n",a-b);
			break;
		case '*':
			printf("Result = %d\n",a*b);
			break;
		case '/':
			printf("Result = %d\n",a/b);
			break;
		case '%':
			printf("Result = %d\n",a%b);
			break;
		default:
			printf("Enter valid operator\n");
	}/*End of switch*/
	return 0;
}/*End of main()*/
