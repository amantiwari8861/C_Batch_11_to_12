#include<stdio.h>

int main()
{
    char ch;
    printf(" enter a character :");
    scanf("%c",&ch);

    if ( ch >= 65 && ch<=90  )
    {
        printf(" %c is Capital Alphabet \n",ch);
    }
    else if (ch>=97 && ch<=122)
    {
        printf(" %c is Small Alphabet \n",ch);
    }
    else if (ch >=48 && ch<=57)
    {
        printf(" %c is digit \n",ch);
    }
    else
    {
        printf(" %c is special character \n",ch);
    }
    return 0;
}
