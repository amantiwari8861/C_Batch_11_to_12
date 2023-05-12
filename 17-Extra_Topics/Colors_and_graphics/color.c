#include <stdio.h>

int main(){
    
    printf("\n");
    printf("\x1B[30mBlack\033[0m\t\t");
    printf("\x1B[31mRed\033[0m\t\t");
    printf("\x1B[32mGreen\033[0m\t\t");
    printf("\x1B[33mYellow\033[0m\t\t");
    printf("\x1B[34mBlue\033[0m\t\t");
    printf("\x1B[35mMagenta\033[0m\t\t");
    printf("\x1B[36mCyan\033[0m\t\t\n");
    printf("\x1B[37mWhite\033[0m\t\t");
    printf("\x1B[90mBright(Gray)\033[0m\t\t"); 
    printf("\x1B[91mBright Red\033[0m\t\t");
    printf("\x1B[92mBright Green\033[0m\t\t");
    printf("\x1B[93mBright Yellow\033[0m\t\t");
    printf("\x1B[94mBright Blue\033[0m\t\t");
    printf("\x1B[95mBright Magenta\033[0m\t\t");
    printf("\x1B[96mBright cyan\033[0m\t\t");
    printf("\x1B[97mBright White\033[0m\t\t");
    
    printf("\033[3;42;30mTexting\033[0m\t\t");
    printf("\033[3;43;31mTexting\033[0m\t\t");
    printf("\033[3;44;30mTexting\033[0m\t\t");
    printf("\033[3;104;30mTexting\033[0m\t\t");
    printf("\033[3;100;30mTexting\033[0m\n");
    printf("\033[4;47;35mTexting\033[0m\t\t");//underline
    printf("\033[3;47;35mTexting\033[0m\t\t");//italic
    printf("\033[2;47;35mTexting\033[0m\t\t");//normal
    printf("\033[1;47;35mTexting\033[0m\t\t");//bold
    printf("\033[47;35mTexting\033[0m\t\t");//normal
    printf("\t\t");
    printf("\n");

    return 0;
}
