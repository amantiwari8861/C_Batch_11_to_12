#include<stdio.h>
#include<conio.h>
int main()
{
    char ch;
    printf("enter the character :");
    scanf("%c",&ch);
    
    if(ch >= 65 && ch <=90)
    {
      printf("CAPITAL ALPHABET !\n");
    }
    else if( ch >= 97 && ch <=122)
    {
	printf("small alphabet\n");
    }
    else if( ch >= 48 && ch <=57)
    {
	printf("numeric value\n");
    }
    else
    {
      printf("special characters\n");
    }
   getch(); //to hold the output screen
   return 0;
}