#include<stdio.h>

int main()
{
    char name[10];
    printf("enter the name :");
    scanf("%[^\n]s",&name);

    char *ptr;
    ptr=name;
    // ptr=&name[0];

    printf(" at 0 %c \n",ptr[0]);
    printf(" the name is %s \n",ptr);

    return 0;
}