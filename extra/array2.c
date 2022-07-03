#include<stdio.h>

int main()
{
    // int num=100;
    // printf(" value =%d \n",num);
    // printf("Address is %d \n",&num);

    int marks[4]={34,45,50,24};
    int i;
    for ( i = 0; i < 4; i++)
    {
        printf(" marks[%d] address is %d \n",i,&marks[i]);
    }
    

    return 0;
}
