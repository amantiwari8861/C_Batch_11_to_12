/*P5.35 Program to find whether the alphabet is a vowel or consonant*/
#include<stdio.h>
int main(void)
{
	char ch;
	printf("Enter an alphabet : ");
	scanf("%c",&ch);
	switch(ch)
	{
		case 'a':
		case 'e':
		case 'i':
		case 'o':
		case 'u':		
			printf("Alphabet is a vowel\n");
			break;
		default:
			printf("Alphabet is a consonant\n");
	}
	return 0;
}
