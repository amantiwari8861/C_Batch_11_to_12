#include<stdio.h>
#include<string.h>
int main()
{
    char name[30];
    printf("Enter ur name :");
    scanf("%[^\n]s",&name);

    printf(" The name is %s \n",name);
    // int len=strlen(name);
    // printf("The length is %d \n",strlen(name));
    // printf(" %s \n",strupr(name));
    // printf(" %s \n",strlwr(name));
    // printf(" %s \n",strcat(name," 8861"));
    // printf(" %s \n",name);
    // printf(" %s \n",strrev(name));

    fflush(stdin);

    char name2[30];
    printf("Enter ur name2 :");
    scanf("%[^\n]s",&name2);

    printf(" The name2 is %s \n",name2);


    int res=strcmp(name,name2);

    if (res == -1)
    {
        printf("First String is less than second \n");
    }
    else if (res == 0)
    {
        printf("Both Strings are same\n");
    }
    else
    {
        printf("First String is greater than second \n");
    }
    return 0;
}
