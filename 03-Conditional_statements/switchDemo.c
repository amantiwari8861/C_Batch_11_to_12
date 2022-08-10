#include<stdio.h>
int main()
{
    int choice;
    printf("1.Start the Game\n");
    printf("2.Games Setting\n");
    printf("3.Change Controls\n");
    printf("4.Exit Game\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);
    switch(choice)
    {
        case 1:printf("Starting the Game\n");
        break;
        case 2:printf("Opening Games Setting\n");
        break;
        case 3:printf("Changeing Controls\n");
        break;
        case 4:printf("Exiting Game\n");
        break;
        default:printf("Invalid Choice\n");
    }
    return 0;
}
