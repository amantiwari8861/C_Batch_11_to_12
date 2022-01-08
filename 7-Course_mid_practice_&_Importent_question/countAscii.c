#include <stdio.h>
int main()
{
    char ch[10];
    int  counts, countc, countn, countsp;
     countc = countn = counts = countsp = 0;
    printf("enter the character :");
    for (int i = 0; i < 10; i++)
    {
        scanf("%c", &ch[i]);
        fflush(stdin);
        if (ch[i] >= 65 && ch[i] <= 90)
        {
            // printf("CAPITAL ALPHABET !\n");
            ++countc;
        }
        else if (ch[i] >= 97 && ch[i] <= 122)
        {
            // printf("small alphabet\n");
            ++counts;
        }
        else if (ch[i] >= 48 && ch[i] <= 57)
        {
            // printf("numeric value\n");
            ++countn;
        }
        else
        {
            // printf("special characters\n");
            ++countsp;
        }
    }

    printf("small = %d capital=%d numeric=%d special=%d \n",counts,countc,countn,countsp);


    return 0;
}