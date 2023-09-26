#include<stdio.h>
int main()
{
    int n;
    printf("enter the size of array:");
    scanf("%d",&n);

    int boxes[n];// 10,45,67
    printf("enter the no. of books\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&boxes[i]);
    }    
    int box2[n];
    for (int i = 0; i < n; i++)
    {
        // box2[i]=boxes[i];
        box2[n-i-1]=boxes[i];
    }
    printf("the content of box2 is \n");
    for (int i = 0; i < n; i++)
    {
        printf(" %d ",box2[i]);
    }
    return 0;
}
