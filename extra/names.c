#include<stdio.h>
int main()
{
    // char names[5][20];

    // printf("enter 5 names\n");
    // for (int i = 0; i < 5; i++)
    // {
    //     scanf("%[^\n]s",&names[i]);
    //     fflush(stdin); 
    // }
    // for (int i = 0; i < 5; i++)
    // {
    //     sprintf(names[i], "Aman %d", i);
    // }
    
    // printf("the names are :\n");
    // for (int i = 0; i < 5; i++)
    // {
    //     printf("%s\n",names[i]);
    // }
    int arr1[]={10,20,30,40};
    int arr2[]={10,200,30,40};
    int isEqual=1;
    for (int i = 0; i < 4; i++)
    {
        if (arr1[i]!=arr2[i])
        {
            isEqual=0;
        }   
    }
    if (isEqual==1)
    {
        printf("both arrays are equal\n");
    }
    else
    {
        printf("both arrays are not equal\n");
    }
    return 0;
}
