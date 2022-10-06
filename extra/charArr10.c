#include<stdio.h>
int main()
{
    char arr[10],Scount,Ncount,SPcount,Ccount;
    Scount=Ncount=SPcount=Ccount=0;
    printf("enter 10 characters in array \n");
    for (int i = 0; i < 10; i++)
    {
        scanf("%c",&arr[i]);
        fflush(stdin);
    }
    for (int i = 0; i < 10; i++)
    {
        if (arr[i]>=65 && arr[i]<=90)
        {
            Ccount++;
        }
        else if (arr[i]>=97 && arr[i]<=122)
        {
            Scount++;
        }
        else if (arr[i]>=48 && arr[i]<=57)
        {
            Ncount++;
        }
        else
        {
            SPcount++;
        }
    }
    printf("Capital :%d \n Small :%d  \n Numeric:%d   \nSpecial Character(Symbols)  %d \n",Ccount,Scount,Ncount,SPcount); 
    return 0;
}