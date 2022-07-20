#include<stdio.h>
#include<string.h>
int main()
{
    // char arr[30];
    // printf("enter ur name :");
    // scanf("%[^\n]s",&arr);
    // int len=strlen(arr);
    // printf("the length of name is %d \n",len);
    // printf("the length of name is %d \n",strlen(arr));

    // char name[30];
    // strcpy(name,arr);
    // printf("the copied value is %s \n",name);
    // strcat(name," tiwari");
    // printf("the updated name is %s \n",name);
    // printf("my name in lowercase %s \n",strlwr(name));
    // printf("my name in uppercase %s \n",strupr(name));
    // printf("my name in REVERSE %s \n",strrev(name));

    char name1[30];
    char name2[30];
    printf("enter 2 names :\n");
    scanf("%[^\n]s",&name1);
    scanf(" %[^\n]s",&name2);
    printf("the value of name1 %s and name2 is %s  \n",name1,name2);
    if(strcmp(name1,name2) == -1)
    {
        // A = 65 a=97   => 65-97 = -32 =>-1
        printf("first string is less than second string \n");
    }
    else if (strcmp(name1,name2) == 1)
    {
        // a=97 A = 65   => 97-65 = 32 => +1
        printf("first string is greater than second string \n");
    }
    else
    {
        // strcmp return 0 on exact match
        // a= 97 a=97    => 97-97 => 0
        printf("both strings are same \n");
    }
    //note : in last index of array there is an '\0'  or NULL character is placed

    return 0;
}