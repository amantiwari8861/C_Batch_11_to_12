#include<stdio.h>
int main()
{
    //loop -> 
    // int i,j;
    // for (i = 1,j=2; i < 10 ; i++,j+=3) // times= ?
    // {
    //     printf("%d.Hello Harsh\n",i);
    // }
    // printf("i=%d & j=%d \n",i,j); // ? ?


    // int i=10;
    // while (i>-20)
    // {
    //     i--;
    //     printf(" i=%d ",i);
    // }
    
    // int res= -5*-12;
    // printf("res=%d\n",res);

    // int a=1634;
    // while (a>0)
    // {
    //     a/=10;
    //     printf("a= %d \n",a);
    // }
    // printf("a=%d \n",a);

    char isYouEatenFood;

    do
    {
        printf("is u eaten food ? :");
        scanf("%c",&isYouEatenFood);
        fflush(stdin);

    } while (isYouEatenFood=='n' || isYouEatenFood=='N');
    
    return 0;
}
