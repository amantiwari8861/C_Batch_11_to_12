#include<stdio.h>

int main()
{
    char name[20];
    printf("enter ur name :");
    // scanf("%c",&name);
    // char c=getchar();
    // printf("the character is %c \n",c);    
    // scanf("%s",&name);//only one word
    // scanf("%[^\n]s",&name);//whole sentence
    // scanf("%[^\n]%*c",&name);//whole sentence
    // gets(name); //denied in today's programming
    fgets(name,20,stdin);

    printf("the name is %c \n",name[0]);    
    printf("the name is %s \n",name);    
    // putchar(c);
    return 0;
}
