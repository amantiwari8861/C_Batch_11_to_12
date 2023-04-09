#include<stdio.h>
int main()
{
    char name;
    printf("enter name:");
    scanf("%c",&name);

    if (name=='A'||name=='E'||name=='I'||name=='O'||name=='U')
    {
        printf("vowel at starting\n");
    }
    else if (name=='a'||name=='e'||name=='i'||name=='o'||name=='u')
    {
        printf("vowel at starting \n");
    }
    else
    {
        if (name>=65 && name<=90 || name>=97 && name<=122)
        {
            printf("consonant at starting\n");
        }
    }   
    return 0;
}
