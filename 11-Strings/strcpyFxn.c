#include<stdio.h>
void copyString(char str1[],char str2[])
{
    int i;
    for (i = 0; str1[i] != '\0'; i++)
    {
        str2[i]=str1[i];
    }
    str2[i]='\0';
}
int main()
{
    char name1[100],name2[100];
    printf("Enter String :");
    scanf("%[^\n]s",&name1);

    copyString(name1,name2);

    printf("The copied string is %s \n",name2);
    return 0;
}
