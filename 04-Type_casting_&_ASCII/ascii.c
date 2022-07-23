#include <stdio.h>
int main()
{
  //WAP to check whether a given character is Capital Alphabet,Small Alphabet,Numeric or Special character.
  char ch;
  printf("enter the character :");
  scanf("%c", &ch);

  // if (ch >= 'A' && ch <= 'Z')
  if (ch >= 65 && ch <= 90)
  {
    printf("CAPITAL ALPHABET !\n");
  }
  else if (ch >= 97 && ch <= 122)
  {
    printf("small alphabet\n");
  }
  else if (ch >= 48 && ch <= 57)
  {
    printf("numeric value\n");
  }
  else
  {
    printf("special characters\n");
  }
  return 0;
}