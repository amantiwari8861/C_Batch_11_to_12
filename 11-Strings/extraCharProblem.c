#include<stdio.h>
int main()
{
    char ch;
    int num;
    printf("enter num:");
    // scanf("%d",&num);//20
    // fflush(stdin);//may not work properly in linux
    scanf("%d%*c",&num);

    printf("enter a character : ");
    scanf("%c",&ch);// B

    printf("num=%d and ch=%c (ASCII=%d) hai",num,ch,ch);
    return 0;
}
