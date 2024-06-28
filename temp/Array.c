#include<stdio.h>
int main()
{
    // Array : homogeneous collection of data 
    int marks[7];

    // marks[0]=1;
    // marks[1]=10;
    // marks[2]=20;
    // marks[3]=30;
    // marks[4]=40;
    // marks[5]=50;
    // marks[6]=60;
    // scanf("%d",marks[0]);
    // scanf("%d",marks[1]);
    // scanf("%d",marks[2]);
    // scanf("%d",marks[3]);
    // scanf("%d",marks[4]);
    // scanf("%d",marks[5]);
    // scanf("%d",marks[6]);

    printf("enter 7 subjects marks:\n");
    for (int i = 0; i < 7; i++)
    {
        scanf("%d",&marks[i]);
    }
    printf("the marks are :\n");
    for (int i = 0; i < 7; i++)
    {
        printf("%d ",marks[i]);
    }
    return 0;
}
