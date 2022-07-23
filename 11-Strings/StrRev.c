#include<stdio.h>
int main()
{
    char name[30];
    int count;
    printf("enter name:");
    scanf("%[^\n]s",&name);

    for(count=0;name[count] != '\0';count++);

    printf("the length of name is %d \n",count);

    for (int i = count;i>=0;i--)
    {
        printf("%c",name[i]);
    }
    
    return 0;
}