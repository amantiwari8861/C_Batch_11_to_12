#include<stdio.h>
int main()
{
    //typeCasting

    //float to int
    // float val=5644.554219;
    // int res=val;
    // printf(" %d ",res);

    //int to char
    // int num=65;
    // char ch3=num;
    // printf("%c",ch3);

    // char ch4='B';
    // int num2=ch4;
    // printf("%d",num2);


    //Loop 
    //for while do-while
    // for (int x = 0; x < 10; x++)
    // {
    //     printf("%d\n",x);
    // }
    // for (int x = 10; x > 0; x--)
    // {
    //     printf("%d\n",x);
    // }

    //While Loop
    // int num=3;
    // while (num<=60)
    // {
    //     printf("%d\n",num);
    //     num=num+3;
    // }
    // int num=30;
    // while (num>0)
    // {
    //     printf("%d\n",num);
    //     num=num-3;
    // }
    
    //do-while
    // int choice;
    // do
    // {
    //     printf("enter the choice(less than 7):");
    //     scanf("%d",&choice);

    //     printf("your choice is %d \n",choice);
        
    // } while (choice<0);

    // 2D Array

    int matr[2][3];
    printf("enter matrix \n");
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            scanf("%d",&matr[i][j]);
        }
    }
    printf("the matrix is \n");
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d\t",matr[i][j]);
        }
        printf("\n");
    }
    



    return 0;
}
