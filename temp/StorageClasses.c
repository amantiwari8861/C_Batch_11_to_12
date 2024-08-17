#include<stdio.h>

int modiJi=56; // global variable

void myfunc()
{
    // printf("num =%d \n",num);
}
void printNum(int num)
{
    printf("num=%d \n",num);
    printf("modiji = %d in printnum \n",modiJi);
    modiJi=99;
}
int main()
{
    auto int num=10;
   /*  myfunc();
    {
        int num2=55;
    }
    printf("num2= %d \n",num2);

    for (int i = 0; i < 10; i++)
    {
    }
    printf("i=%d",i); */
    printNum(num);
    printf("modiji = %d in main \n",modiJi);
    return 0;
}