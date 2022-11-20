#include<stdio.h>
int main()
{
    int s1,s2,s3;
    printf("enter 3 sides \n");
    scanf("%d%d%d",&s1,&s2,&s3);

    if(s1==s2 && s2==s3 && s3==s1)
    {
        printf("Equilateral Triangle \n");
    }
    else if (s1==s2 || s2==s3 || s3==s1)
    {
        printf("isoscales triangle\n");
    }
    else
    {
        printf("Scalen Triangle \n");
    }
    return 0;
}
