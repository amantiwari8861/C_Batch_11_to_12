// 18. Write a C program to calculate profit and loss on a transaction.

#include<stdio.h>

int main()
{
    int sp,cp,profit,loss;
    printf("Enter the Selling price and Cost Price = ");
    scanf("%d%d",&sp,&cp);

    if (sp>cp)
    {
        profit = sp-cp;
        printf("!You have to made a Profit of Rs %d .",profit);
    }
    else   if (cp>sp)
        {
            loss = cp-sp; 
            printf("!You have to made a Loss of Rs %d .",loss);
        }
    return 0;
}
