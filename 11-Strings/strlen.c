#include<stdio.h>
int main()
{
    char name[100];
    printf("enter the name\n");
    scanf("%[^\n]s",name);
    
    int count;
    // for(count=0;name[count] != '\0';count++);

    for (int i = 0; name[i] != '\0'; i++)
    {
        // if (name[i] != ' ')
        // {
            count++;
        // } 
    }
    printf("length of the name is %d\n",count);
    return 0;
}