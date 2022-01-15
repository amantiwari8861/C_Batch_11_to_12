#include<stdio.h>

int main()
{
    int marks;
    printf("enter the marks :");
    scanf("%d",&marks);

    if (marks >= 90)
    {
        printf("take admission in amity \n");
    }
    else if (marks >= 80)  //ladder
    {
        printf(" DU \n");
    }
    else if (marks >=60 )
    {
        printf(" ipu \n");
    }
    else if (marks >=33)
    {
        printf(" ignou \n");
    }
    else
    {
        printf("  go sell  the tea \n");
    }
    
    
    
    
    



    return 0;
}
