#include<stdio.h>
int main()
{
    int marks[7];
    // marks[0]=85;
    // marks[1]=95;
    // marks[2]=65;
    // marks[3]=81;
    // marks[4]=86;
    // marks[5]=12;
    // marks[6]=98;
    printf("enter 7 subjects marks :\n");
    // scanf("%d",&marks[0]);
    // scanf("%d",&marks[1]);
    // scanf("%d",&marks[2]);
    // scanf("%d",&marks[3]);
    // scanf("%d",&marks[4]);
    // scanf("%d",&marks[5]);
    // scanf("%d",&marks[6]);

    // printf("the value in 0 index is %d \n",marks[0]);
    // printf("the value in 1 index is %d \n",marks[1]);
    // printf("the value in 2 index is %d \n",marks[2]);
    // printf("the value in 3 index is %d \n",marks[3]);
    // printf("the value in 4 index is %d \n",marks[4]);
    // printf("the value in 5 index is %d \n",marks[5]);
    // printf("the value in 6 index is %d \n",marks[6]);

    for (int i = 0; i < 7; i++)
    {
        printf("enter the value of %d element in array:",i);
        scanf("%d",&marks[i]);
    }

    for (int i = 0; i < 7; i++)
    {
        printf("the value in %d index is %d \n",i,marks[i]);
    }
    
    




    return 0;
}
