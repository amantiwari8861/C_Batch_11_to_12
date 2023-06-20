/*E9.1*/
int main(void)
{
	int a=5,*ptr;
	ptr=&a;
	printf("Input a number : ");
	scanf("%d",ptr);	/*Suppose the input number is 16*/
	printf("%d %d\n",a,*ptr);
	return 0;
}