#include<stdio.h>
#include<windows.h>
#include<conio.h>
#define BLUE "\x1B[34m"
#define RESET "\033[0m"
#define BG_WHITE "\033[3;47;94m"
int main()
{
    char ch;
    do
    {
        system("cls");
        printf(BG_WHITE"enterr ur choice :"RESET);
        scanf("%c%*c",&ch);
        printf("ch=%c \n",ch);

        printf("press any key to continue....");
        getch();

    } while (ch!='x');

    
    return 0;
}
