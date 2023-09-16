#include<stdio.h>
int main()
{
    //7^4 => 7*7*7*7

    float num,power,result=1;
    printf("enter the number & power\n");
    scanf("%f%f",&num,&power);


    for (int i = 0; i < power; i++)
    {
        // printf("%0.2f",num);
        // if (i<power-1)
        // {
        //     printf(" * ");
        // }
        
        result=result*num;
    }
    
    printf(" = %0.2f \n",result);
    return 0;
}
