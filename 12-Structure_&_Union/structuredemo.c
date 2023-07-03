#include<stdio.h>
#include<string.h>
int main()
{
    struct Movie
    {
        char name[20]; //20 bytes
        int year;//4 bytes
        float rating;//4 bytes
    // };
    }m1,m3,m4;
    // printf("the size of m1 =%d bytes \n",sizeof(m1));
    // printf("the size of movie2 =%d byte \n",sizeof(m4));

    // printf("enter the name of movie: ");
    // scanf("%[^\n]s",&m1.name);
    // printf("enter the year of movie: ");
    // scanf("%d",&m1.year);
    // printf("enter the rating of movie: ");
    // scanf("%f",&m1.rating);
    // printf("the name of movie is \"%s\" \n",m1.name);
    // printf("the year of movie is %d \n",m1.year);
    // printf("the rating of movie is %0.1f \n",m1.rating);

    // fflush(stdin);
    struct Movie movie2;
    // movie2.name="wakanda forever"; //error
    strcpy(movie2.name,"wakanda forever");
    // printf("enter the name of movie2: ");
    // scanf("%[^\n]s",&movie2.name);
    printf("enter the year of movie2: ");
    scanf("%d",&movie2.year);
    printf("enter the rating of movie2: ");
    scanf("%f",&movie2.rating);
    printf("the name of movie is %s \n",movie2.name);
    printf("the year of movie is %d \n",movie2.year);
    printf("the rating of movie is %0.1f \n",movie2.rating);


    return 0;
}
