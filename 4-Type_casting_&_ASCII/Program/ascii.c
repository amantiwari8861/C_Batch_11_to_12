#include<stdio.h>
int main()
{
    char character;
    printf("enter the character :");
    scanf("%c",&character);


    if(character =='A' || character =='E' || character =='I' || character =='O' || character =='U' )
    {
        printf("Capital Alphabet ! : %c and it's ascii value is %d \n",character,character );
    }
    else
    {
        printf("not a Capital Alphabet !\n");        
    } 
    // if (character>=65 && character<=90)
    // if (character>='A' && character<='Z')


    return 0;
}