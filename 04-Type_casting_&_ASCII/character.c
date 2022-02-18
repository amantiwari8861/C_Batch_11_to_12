#include<stdio.h>
int main()
{
    char ch;
    printf("Enter a character: ");
    scanf("%c",&ch);

    if(ch=='a' || ch=='e' || ch=='i'|| ch=='o'|| ch=='u')
    {
        printf("small vowel");
    }
    else if(ch=='A' || ch=='E' || ch=='I'|| ch=='O'|| ch=='U')
    {
        printf("Capital vowel");
    }
    else
    {
        printf("consonant or any special character");
    }
    return 0;
}
