#include<stdio.h>
#define PRINTCOBOL for (int i = 0; i < 5; i++)   \
    {  \
        for (int j = 0; j <= i; j++)  \
        {  \
            printf("%c",string[j]);  \
        }  \
        printf("\n");  \
    }  \
    for (int i = 0; i < 5; i++)  \
    {  \
        for (int j =4; j >=i; j--)  \
        {  \
            printf("%c",string[4-j]);  \
        }  \
        printf("\n");  \
    }  

int main()
{
    char string[]="COBOL";

    PRINTCOBOL;
    

    return 0;
}
