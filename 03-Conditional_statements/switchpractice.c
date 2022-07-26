#include<stdio.h>
int main()
{
    int choice;
    printf("enter the day number \n");
    scanf("%d",&choice);

    switch(choice)//4
    {
        case 1: printf("MONDAY \n");
        break;
        case 2: printf("TUESDAY \n");
        break;
        case 3: printf("WEDNESDAY \n");
        break;
        case 4: printf("THRUSDAY \n");
        break;
        case 5: printf("FRIDAY \n");
        break;
        case 6: printf("SATURDAY \n");
        break;
        case 7: printf("SUNDAY \n");
        break;
        default: printf("invalid day ! \n");
        break;
    }
    return 0;
}
