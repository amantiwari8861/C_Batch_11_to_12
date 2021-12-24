#include<stdio.h>

int main()
{
    int num,times = 10,table;

    printf("Enetr the number = ");
    scanf("%d",&num);
    

    printf("The table of %d is: \n",num);
    for (int i = 1; i <=times; i++)
    {
        table = num * i;
        printf("\t\t %d*%d= %d \n",num,i,table);
    }
    
    
    return 0;
}
