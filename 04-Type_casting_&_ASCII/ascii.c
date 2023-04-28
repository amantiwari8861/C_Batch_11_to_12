#include <stdio.h>
int main()
{
  // WAP to check whether a given character is Capital Alphabet,Small Alphabet,Numeric or Special character.
  char ch;
  printf("enter the character :");
  scanf("%c", &ch);

  if (ch >= 'A' && ch <= 'Z')
  // if (ch >= 65 && ch <= 90)
  {
    printf("%c is a CAPITAL ALPHABET \n", ch);
  }
  else if (ch >= 97 && ch <= 122)
  {
    printf("%c is a small alphabet\n", ch);
  }
  else if (ch >= 48 && ch <= 57)
  {
    printf("%c is a numeric value\n", ch);
  }
  else
  {
    printf("%c is a special characters\n", ch);
  }
  return 0;
}