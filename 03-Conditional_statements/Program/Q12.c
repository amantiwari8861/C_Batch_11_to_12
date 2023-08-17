#include<stdio.h>
int main()
{
    int rollno;
    float m1,m2,m3,total,percentage;
    printf("enter roll no:");
    scanf("%d",&rollno);

    printf("enter 3 subject marks\n");
    scanf("%f%f%f",&m1,&m2,&m3);

    total=m1+m2+m3;
    percentage=(total/300)*100;
    printf("total=%f percdivisionentage=%f \n",total,percentage);




    return 0;
}
