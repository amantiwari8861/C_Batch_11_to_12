#include<stdio.h>

int main()
{
    int size,start=0;
    char name[]="Aman";
    for(size=0;name[size]!='\0';size++);
    printf("the size is %d \n",size);
    // printf("the sizeof is %d \n",sizeof(name));
    char name2[size];
    for(size-1,start;size>0;size--)
    name2[start++]=name[size-1];
    name2[start]='\0';
    printf("the name2 is %s \n",name2);

    return 0;
}
