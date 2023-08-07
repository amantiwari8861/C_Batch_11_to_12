#include<stdio.h>
int main()
{
    // char charr[]={'A','M','A','N'};
    // printf("%c",charr[0]);
    // printf("%c",charr[1]);
    // printf("%c",charr[2]);
    // printf("%c\n",charr[3]);
    // for (int i = 0; i < 4; i++)
    // {
    //     printf("%c",charr[i]);
    // }
    
    // char name[]={"Aman Tiwari"};
    // char name[]="Aman Tiwari";
    // // printf("My name is %s\n",name);
    // for (int i = 0; i < 11; i++)
    // {
    //     printf("%c\n",name[i]);
    // }

    char name2[20];
    printf("enter ur name:\n");
    for (int i = 0; i < 10; i++)
    {
        // scanf("%c",&name2[i]);//for input as string
        scanf("%c%*c",&name2[i]);//for input as char
        // fflush(stdin);//only works in windows

    }
    
    printf("My name is %s\n",name2);

    return 0;
}
