#include<stdio.h>
int main()
{
    char name[10];
    for (int i = 0; i < 10; i++)
    {
        if (i==5)
            name[i]='\0';
        else
            name[i]=(char)65+i;// casting
    }
    printf("the name is %s \n",name);
    for (int i = 0; i < 10; i++)
    {
        if (name[i]=='\0')
            printf("at name[%d] has NULL character \n",i);
        else
            printf("ASCII of character at name[%d] position  = %d and character is %c \n",i,name[i],name[i]);
    }
    return 0;
}
