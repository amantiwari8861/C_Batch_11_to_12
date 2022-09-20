#include<stdio.h>
int main()
{
    //case 1:
    //  int num=1;
    // do
    // {
    //     printf("num= %d \n",num);
    //     num++;
    // } while (num<=10); //condition true  

    //case 2:
    int num=1;
    do
    {
        printf("num = %d \n",num);
        num++;
    } 
    while (num>20); //condition wrong 

    return 0;
}
