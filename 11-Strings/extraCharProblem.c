#include<stdio.h>
int main()
{
    char ch;
    int num;
    printf("enter num:");
    // scanf("%d",&num);
    // fflush(stdin);//may not work properly in linux
    scanf("%d%*c",&num);

    printf("enter a character : ");
    scanf("%c",&ch);

    printf("num=%d and ch=%c (ASCII=%d) hai",num,ch,ch);
    return 0;
}
