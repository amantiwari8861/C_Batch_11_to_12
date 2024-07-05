#include<stdio.h>
#include<string.h>

void swap(char name[],int pos1,int pos2)
{
    printf("swapping %c with %c \n",name[pos1],name[pos2]);
    char temp=name[pos1];//A
    name[pos1]=name[pos2];
    name[pos2]=temp;
}
int main()
{
    char name[100];
    printf("enter ur name:");
    scanf("%[^\n]s",&name);

    int len=strlen(name);
    printf("len=%d \n",len);
    int f=0,b=len-1;

    while (f<b)
    {
        swap(name,f,b);
        f++;
        b--;
    }
    printf("the reverse string is %s \n",name);
    return 0;
}
