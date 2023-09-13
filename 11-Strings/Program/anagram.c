#include <stdio.h>
#include<string.h>
int isAnagram(char str1[],char str2[]);

int main()
{
    char str1[50],str2[50];
    printf("enter 2 strings :\n");
    scanf("%[^\n]%*c", &str1);//colaa
    scanf("%[^\n]%*c", &str2);//coaal

    isAnagram(str1,str2) ? printf("Anagram !\n") : printf("Not Anagram !!\n");
    return 0;
}
int isAnagram(char str1[],char str2[])
{
    int arr1[256]={0},arr2[256]={0};

    if(strlen(str1) != strlen(str2))
        return 0;

    for (int i = 0; i < strlen(str1); i++)
    {
        arr1[str1[i]]++;
        arr2[str2[i]]++;
    }
    
    for (int i = 0; i < 255; i++)
    {
        if(arr1[i]!=arr2[i])
        return 0;
    }
    return 1;
}