#include <stdio.h>
int main()
{
  char ch;
  printf("enter the character :");
  scanf("%c", &ch);

  if (ch >= 'A' && ch <= 'Z')
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