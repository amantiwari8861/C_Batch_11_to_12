#include<stdio.h>
void change(int*);
int main()
{
    int num;
    printf(" enter the value of num :");
    scanf("%d",&num);

    change(&num);
       
    printf(" num =%d in main fxn\n",num);
    return 0;
}
void change( int *num)
{
    *num=80;
    printf(" num =%d  in change fxn\n",*num);

}