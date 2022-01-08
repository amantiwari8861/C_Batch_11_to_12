#include<stdio.h>
int main()
{
    char name[]="aman";
    int i;
    for (i = 0; name[i] != '\0'; i++)
    {
        printf("the character at %d position is %c \n",i,name[i]);
    }
   
   printf("the length of string is %d \n",i);
    

    return 0;
}
