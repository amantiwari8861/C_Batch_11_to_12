#include<stdio.h>
int main()
{
    char data[10];
    int Ccount,Scount,Ncount,SPcount;
    Ccount=Scount=Ncount=SPcount=0;
    printf("enter 10 characters :\n");
    for (int i = 0; i < 10; i++)
    {
        scanf("%c",&data[i]);
        fflush(stdin);
    }
    for (int i = 0; i < 10; i++)
    {
        if (data[i]>=65 && data[i]<=90)
        {
            Ccount++;
        }
        else if (data[i]>=97 && data[i]<=122)
        {
            Scount++;
        }
        else if (data[i]>=48 && data[i]<=57)
        {
            Ncount++;
        }
        else
        {
            SPcount++;
        } 
    }
    
    printf("Capital Alphabets : %d \n",Ccount);
    printf("Small Alphabets : %d \n",Scount);
    printf("Numeric  : %d \n",Ncount);
    printf("Special Characters : %d \n",SPcount); 

    return 0;
}
