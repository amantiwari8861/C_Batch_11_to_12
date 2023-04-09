#include<stdio.h>

int main()
{
    int marks;
    printf("enter the marks :");
    scanf("%d",&marks);

    if (marks >=90 || marks <=100)
    {
        printf(" u will get admission in DU \n");
    } 
    /*
    IF WE USE or(||) THEN :
    case 1 : marks = 12       12 >= 90 || 12 <=  100 => 0 || 1 => 1 ans then if will execute
    case 2 : marks = 95       95 >= 90 || 95 <=  100 => 1 || 1 => 1 ans then if will execute
    case 3 : marks = 150     150 >= 90 || 150 <= 100 => 1 || 0 => 1 ans then if will execute
    */
    /*
        IF WE USE AND(&&) THEN :
    case 1 : marks = 12       12 >= 90 && 12 <=  100 => 0 && 1 => 0 ans then if will not execute
    case 2 : marks = 95       95 >= 90 && 95 <=  100 => 1 && 1 => 1 ans then if will execute
    case 3 : marks = 150      150 >= 90 && 150 <= 100 => 1 && 0 => 0 ans then if will not execute
    */
    /* if (marks >=90 && marks <=100)
    {
        printf(" u will get admission in amity \n");
    } */
    
    if ( !(marks > 80))
    {
        printf(" u got A grade !\n");
    }
    else
    {
        printf("fail \n");
    }
    /*  case 1 : marks = 12      12 > 80 -> ! (0) => 1 
        case 2 : marks = 95   95 > 80 -> ! (1) => 0
        case 3 : marks = 150  150 > 80 -> ! (1) => 0
     */
    return 0;
}
