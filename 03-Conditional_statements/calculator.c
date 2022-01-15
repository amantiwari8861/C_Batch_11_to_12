#include<stdio.h>
int main()
{
    char choice;
    printf("enter the operation :\n");
    scanf("%c",&choice);
    switch(choice)
    {
        case '+': printf("sum will perform\n");
                break;
        case '-': printf("sub will perform\n");
                break;
        case '*': printf("multi will perform\n");
                break;
        case '/': printf("divide will perform\n");
                break;
        case '@': printf("something will perform\n");
                break;
        default:printf("invalid case !");
        break;
    }
    return 0;
}
// take 2 input from user and perform arithematic action according to user