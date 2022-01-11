#include<stdio.h>
int main()
{
    int choice;
    printf("1.sum\n");
    printf("2.sub\n");
    printf("3.mul\n");
    printf("4.divide\n");
    printf("enter the choice :\n");
    scanf("%d",&choice);//3
    switch(choice)
    {
        case 1: printf("sum will perform\n");
                break;
        case 2: printf("sub will perform\n");
                break;
        case 3: printf("multi will perform\n");
                break;
        case 4: printf("divide will perform\n");
                break;
        case 54: printf("something will perform\n");
                break;
        default:printf("invalid case !");
        break;
    }
    return 0;
}