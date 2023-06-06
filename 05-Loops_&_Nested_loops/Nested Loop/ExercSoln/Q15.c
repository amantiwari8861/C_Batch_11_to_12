#include<stdio.h>
int main()
{
    int space=8,star=1;
    for (int i = 1; i <= 16; i++)
    {
        if (i>12)
        {
            space=5;
            star=4;
        }
        for (int sp = space; sp >0; sp--)
        {
            printf(" ");
        }
        space--;
        for (int st = 0; st < star; st++)
        {
            printf(" *");
        }   
        star++;
        printf("\n");
        if(i%4==0)
        {
            space+=2;
            star-=2;
        }
        
    }
   return 0;
}
