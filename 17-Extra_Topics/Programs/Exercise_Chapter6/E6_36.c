/*E6.36*/
#include<stdio.h>
int reverse(int n);
int isPalindrome(int num);
int isPalindrome1(int num);
int main(void)
{
	int num;
	printf("Enter a number : ");
	scanf("%d",&num);
	if( isPalindrome(num) )
		printf("Number is a palindrome\n");
	else
		printf("Number is not a palindrome\n");

	if( isPalindrome1(num) )
		printf("Number is a palindrome\n");
	else
		printf("Number is not a palindrome\n");
	return 0;
}
int isPalindrome(int num)
{
	if(num==reverse(num))
		return 1;
	else
		return 0;
}
int isPalindrome1(int num)
{
	if(num==reverse(num))
		return 1;
	return 0;
}
int reverse(int n)
{
	int rev=0;
	do
	{
		rev=rev*10+n%10;
		n/=10;
	}while(n>0);
	return rev;
}
