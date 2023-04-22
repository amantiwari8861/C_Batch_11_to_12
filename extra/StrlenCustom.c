#include<stdio.h>
int getLen(char arr[])
{
    int i;
    for (i = 0; arr[i] != '\0'; i++);
    return i;
}
int main()
{
    char name[30];
    printf("Enter ur name :");
    scanf("%[^\n]s",&name);

    printf(" The name is %s \n",name);
    printf(" the length is %d \n",getLen(name));
    return 0;
}
