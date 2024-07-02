#include<stdio.h>
int main()
{
    char input[10];
    int countCap,countSm,countDig,countSp;
    countCap=countSm=countDig=countSp=0;
    printf("enter 10 characters\n");
    for (int i = 0; i < 10; i++)
    {
        // scanf("%c",&input[i]);
        scanf("%c%*c",&input[i]);
        // fflush(stdin);
    }
    for (int i = 0; i < 10; i++)
    {
        if (input[i]>='A' && input[i]<=90)
        {
            countCap++;
        }
        
    }
    
    

    return 0;
}
