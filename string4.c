#include<stdio.h>
int main()
{
    // char name[100]="aman tiwari";
    // char name[100]={"aman tiwari"};
    // char name[100]={'a','m','a','n'};
    char name[100];
    printf("enter ur name \n");
    scanf("%[^\n]s",&name);
    // fgets(name,100,stdin);
    // gets(name); //harmful for our program
    printf("-------------------------------\n");
    
    printf("%s",name);
    // puts(name);
    return 0;
}
